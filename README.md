# Two-Material Raytracing
<img width="1416" alt="header" src="https://github.com/dcui-03/dcui_Graphics.github.io/assets/123329050/dbb262eb-c131-4051-9e24-b4c89b3a56c8">

This project uses the Raytracing InOneWeekend source code as a base and modifies/builds upon it. Only the header files that have been changed are included in this repository. The book and source code can be accessed here (highly recommend!): https://raytracing.github.io/books/RayTracingInOneWeekend.html

Objects presented in the RayTracingInOneWeekend book can only be made up of one material--which is realistic for most isolated objects in the real world, but the goal of this mini-project was to visualize how a sphere might look where one pole is one material (ex. Metal) and the other is a different material (ex. Dielectric), with interpolated material properties in the intermediate region.

To accomplish this, a second sphere class was created called two_mat_sphere. Two_mat_sphere hittable objects contain the same source code as the sphere class, but have additional attributes upon initialization, those being a second material attribute and an axis represented as a vec3 object. The axis vector points in the direction of the sphere's first material, and the negative axis vector points in the direction of the second material.

In order to accommodate a second material attribute, the hit_record class received a second material pointer public variable, as well as an axis variable, which is initialized to (0, 0, 0). Two inline public helper functions were also added to the vec3 class. The first checks for a null axis, and the second finds the interpolation weights given the axis and incoming ray direction.

Now that we have a setup, the ray_color method in the camera class has to be modified for actual pixel color calculations. The general process has us checking for a hit, checking if the hit object is two-material (using the check null axis method), and then finding how well the incoming ray direction aligns with the material axis. We know that if it aligns perfectly (dot(axis, -direction) = 1), then the hit location is entirely the first material, whereas if dot(axis, -direction) = -1, then the hit location is entirely the second material. Values in between can be mapped to a percentage of each material. We now have two methods of solving pixel color, which I will discuss here:

1. Probabilistic Rays: The first method involves finding the alignment weight and treating it as a probability. The single outgoing ray is decided by whether a pseudo-random double is below or above this weight. If it is above, then material 1 scattered ray is chosen. Otherwise, the material 2 scattered ray is chosen.
2. Multiple Recursive Rays: The second method involves producing two outgoing rays, one for each material type. To get the final returned color, we weight the contribution of each material's outgoing ray by its alignment with the axis.

Both methods work and produce solid images, but I would recommend the first implementation. This is because method 2 is very time-intensive, with a runtime of O(2^n), where n is the max recursion depth. Method 1 is on the order of O(n). On an M1 Macbook with method 1 (100 samples per pixel, max depth 50), the image on the left was produced in <1 minute, whereas with method 2 (50 samples per pixel, max depth 20), the image on the right was produced in ~5 hours. More comparison images have been included at the bottom of the README.
<img width="1414" alt="m1vm2" src="https://github.com/dcui-03/dcui_Graphics.github.io/assets/123329050/a0e51f53-e124-40bd-bf1f-30ba13cbaf6b">


Both implementations have been included, with Method 2 commented out for simplicity.


Further Implementations:

- The two_mat_sphere class could be easily integrated into the sphere class.

- This method only works for symmetrical axis splits with one kind of interpolation. It would be interesting to generalize this process for n materials, each of which is on its own arbitrary axis.

- Any number of minor logical issues could still exist in this implementation. I would love to hear about potential improvements!

More Images:

- Method 1 (100 samples per pixel, max depth 50) is shown on the left, and Method 2 (50 samples per pixel, max depth 20) is shown on the right. Row one shows the view from the left of the sphere, and row two shows the view from the right of the sphere. Note that Method 2 yields substantially longer runtimes, despite lower settings.
<img width="1171" alt="m1lrvm2lr" src="https://github.com/dcui-03/dcui_Graphics.github.io/assets/123329050/0c53394c-ee34-4163-aece-299c0217adf5">

- Method 1 implementation with 3 half dielectric and half metal nested spheres. Produces an interesting foggy "camera lens" look.
<img width="679" alt="nestedspheres" src="https://github.com/dcui-03/dcui_Graphics.github.io/assets/123329050/657aae77-19dc-4fb5-81e0-ad3f6ec0353d">

- Low resolution Method 2 test showing a half Lambertian and half dielectric sphere. A smaller sphere has been nested inside to make the effect more obvious.
<img width="751" alt="lambdi" src="https://github.com/dcui-03/dcui_Graphics.github.io/assets/123329050/5f37805f-810c-40ae-b513-86dacbda3efd">


