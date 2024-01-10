# SHADED RENDERING
Shaded Rendering Simulation (Python and GLSL)

(Starter code for the OpenGL pipeline was provided by instructor. Code is copyrighted and is not shareable on public pages. Descriptions are left somewhat vague, as project solutions are also not shareable on public pages.)

The project aims to render simple 3D objects (i.e., sphere, ellipsoid, cube) using EBO, as well as provide lighting models for ambient, specular, and diffuse lighting conditions.

GENERAL

Implementation of keyboard shortcuts to accomplish the following:
  - Toggle scene-specific light objects on/off.
  - Toggle ambient, diffuse, specular components on/off.
  - Switch between scenes

Four scenes were designed to display and test the capabilities of the program. (See below for images). Some scenes include animated light components.

MESHES

Meshes for the following objects were created: Cube, Sphere, Ellipsoid, Cylinder, Torus, Half Sphere, Half Torus. Vertices and vertex normals were calculated using parametric forms and catalogued using EBO. Duplicate vertices were catalogued for Sphere and Torus in order to perform texture mapping. Additionally, duplicate vertices with differing normals were catalogued for Cylinders, Half Spheres, and Half Toruses at locations where smooth edges meet flat faces.

Meshes were compiled in the four different scenes. Each mesh in each scene was given a different ambient, specular, and diffuse coefficient, such that differing textures and reflectivity could be observed.

LIGHTING (GLSL)

Given light objects were positioned to illuminate created scenes. Lights were also given typing (point, spotlight, infinite), and associated attributes for their type.

Unlike other sections, lighting calculations and controls were written as a fragment shader in GLSL using Phong Shading. For each fragment, the lighting calculations were performed using attributes of the light, the camera position, as well as the normal vector and material attributes of the fragment object. Radial and angular attenuation were accounted for in calculations. Resulting specular, diffuse, and ambient components were combined and clamped to produce proper RGB values.

TEXTURE AND NORMAL MAPPING

Texture mapping and normal mapping calculations were performed on the Sphere and Torus meshes by assigning valid texel coordinates to each vertex. Texels were then pulled from the texture map (as specified in the scene) when constructing objects during runtime.



https://github.com/dcui-03/dcui-03.github.io/assets/123329050/a8aced8d-3278-45c7-9d5f-658e717dc7f5
