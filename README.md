# 3D Modeling and Transformations

3D Modeling and Transformation (Python)

(starter code for the OpenGL pipeline was provided by instructor. Code is copyrighted and is not shareable on public pages.)

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

Five scenes were constructed for the creature, demonstrating its range of movement and dynamic, realistic posturing (see below).

Each component/limb in the creature (including ears, eyebrows, pupils, paws, etc.) was assigned a keyboard binding, allowing them to be selected in real time and rotated along the same axis.
