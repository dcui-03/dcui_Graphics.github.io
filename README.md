# 3D Modeling and Transformations

3D Modeling and Transformation (Python)

(Starter code for the OpenGL pipeline was provided by instructor. Code is copyrighted and is not shareable on public pages. Descriptions are left somewhat vague, as project solutions are also not shareable on public pages.)

The goal of the project was to explore 3D geometry and effects of transformations in OpenGL. After brainstorming my creature, I drew a reference image (see below). 

GENERAL

Keyboard bindings were introduced to accomplish the following:

  - Select, deselect, and multi-select joints
  - Switch between scenes

TRANSFORMATIONS

Transformation matrices were multiplied in the proper order to produce desired results

CONSTRUCTION

Using provided meshes for Cube, Sphere, Cylinder, and Cone, the creature was created. Components and limbs were assigned to a hierarchy such that rotations and translations performed on parent components were also performed on children. Each component was also assigned an angle range for its local u, v, w axes. 

MOVEMENT

Five scenes were constructed for the creature, demonstrating its range of movement and dynamic, realistic posturing (four of the scenes are shown below).

Each component/limb in the creature (including ears, eyebrows, pupils, paws, etc.) was assigned a keyboard binding, allowing them to be selected in real time and rotated along the same axis.

<img width="400" alt="Screen Shot 2023-10-16 at 1 39 06 AM" src="https://github.com/dcui-03/dcui-03.github.io/assets/123329050/d6af70f3-9d17-45ba-ab5c-3dd65ee919f5">
<img width="400" alt="Screen Shot 2023-10-16 at 1 16 02 AM" src="https://github.com/dcui-03/dcui-03.github.io/assets/123329050/d0998f20-46d3-4844-865b-fa3b9f4ed883">

<img width="400" alt="Screen Shot 2023-10-16 at 1 15 51 AM" src="https://github.com/dcui-03/dcui-03.github.io/assets/123329050/c32cc618-71ef-4cee-ae79-3fec04b2e608">
<img width="400" alt="Screen Shot 2023-10-16 at 1 16 32 AM" src="https://github.com/dcui-03/dcui-03.github.io/assets/123329050/4b678254-b0e7-4bf0-b4fc-f96fbd375cbc">

![ReferenceDrawing](https://github.com/dcui-03/dcui-03.github.io/assets/123329050/cebd7358-d970-4b3c-8f75-3b2476e4d607)
