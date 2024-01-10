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

Five scenes were constructed for the creature, demonstrating its range of movement and dynamic, realistic posturing (See video below).

Each component/limb in the creature (including ears, eyebrows, pupils, paws, etc.) was assigned a keyboard binding, allowing them to be selected in real time and rotated along the same axis. Symmetrical limbs, such as the front legs, back legs, and tail components, also experienced mirrored movement when selected together. (See videos below)

https://github.com/dcui-03/dcui-03.github.io/assets/123329050/ebc3b7c5-6f72-40d6-a41f-e99317f58b2b

https://github.com/dcui-03/dcui-03.github.io/assets/123329050/e5c0e04f-7b13-4479-93ee-a5107d5dd10b

https://github.com/dcui-03/dcui-03.github.io/assets/123329050/b2c5b0ae-d6cd-4bd2-aeb4-e8e10d590067

![ReferenceDrawing](https://github.com/dcui-03/dcui-03.github.io/assets/123329050/cebd7358-d970-4b3c-8f75-3b2476e4d607)
