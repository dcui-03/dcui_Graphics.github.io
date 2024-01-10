# Line-Drawing Program (Scan Conversion)

Line-Drawing Program (Python)

(Starter code for the OpenGL pipeline was provided by instructor. Code is copyrighted and is not shareable on public pages. Descriptions are left somewhat vague, as project solutions are also not shareable on public pages.)

The goal of the project was to generate a line and triangle-drawing program. Basic environment was provided, but implementation was up to self. See video below for demonstration of lines, triangles, as well as tests for constructing regular polygons using the program's triangle-drawing function.

LINES

Implementation of the line-drawing method was dependent upon Bresenham's algorithm. Since a simple derivation of Bresenham's works for only slopes between 0 and 1, lines outside this ranges were transformed to fit this range, and then transformed back to their correct positions when drawn.

TRIANGLES

Drawing and filling triangles followed the scan filling method. Edges of triangles were drawn using Bresenham's algorithm, and then the inside was iteratively scan-filled. Flat bottomed triangles were drawn by directly using this method, while non-flat bottomed triangles were divided into two flat bottomed triangles that were drawn separately.

COLOR

Linear interpolation was implemented for line color and bilinear interpolation was implemented for triangle color, such that randomly selected point colors would produce the expected smooth color gradient. Additionally, randomized color could be toggled off and flat shading would be performed.

TEXTURE

Texture mapping was partially implemented for triangles. A singular issue occurred in which pixels on a steep edges of a triangle did not receive texture mapping.

<img width="500" alt="Screen Shot 2023-09-18 at 12 27 23 AM" src="https://github.com/dcui-03/dcui-03.github.io/assets/123329050/fc0b3472-af4f-4827-9694-7b1600ce6b13">

https://github.com/dcui-03/dcui-03.github.io/assets/123329050/cfb09dee-58a6-49c4-bcd4-a086bf17b95d
