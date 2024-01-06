# dcui-03.github.io
Shaded Rendering Simulation (Python and GLSL)
(starter code for the OpenGL pipeline was provided by instructor. Code is copyrighted and is not shareable on public pages.)

The project aims to render simple 3D objects (i.e., sphere, ellipsoid, cube) using EBO, as well as provide lighting models for ambient, specular, and diffuse lighting conditions.

GENERAL
Implementation of keyboard shortcuts to accomplish the following:
  - Toggle specific light objects on/off.
  - Toggle ambient, diffuse, specular components on/off.
  - Switch between scenes
Four scenes were designed to display and test the capabilities of the program. (See below for images). Some scenes include animated light components.

MESHES
Meshes for the following objects were created: Cube, Sphere, Ellipsoid, Cylinder, Torus, Half Sphere, Half Torus. Vertices and vertex normals were calculated and catalogued using EBO. Duplicate vertices were catalogued for Sphere and Torus in order to perform texture mapping. Additionally, duplicate vertices with differing normals were catalogued for Cylinders, Half Spheres, and Half Toruses at locations where smooth edges meet flat faces.

LIGHTING (GLSL)
Unlike other sections, lighting calculations and controls were written as a fragment shader in GLSL using Phong Shading. For each fragment, the lighting calculations were performed using attributes of the light (point, spotlight, infinite), as well as the material attributes of the object. Radial and angular attenuation were accounted for in calculations. Resulting specular, diffuse, and ambient components were combined and clamped to produce proper RGB values.

TEXTURE AND NORMAL MAPPING
Texture mapping and normal mapping calculations were performed on the Sphere and Torus meshes during construction of EBO.
