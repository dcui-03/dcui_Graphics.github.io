# Predator-Prey Simulation

Predator-Prey Simulation (Python)

(Starter code for the OpenGL pipeline was provided by instructor. Code is copyrighted and is not shareable on public pages. Descriptions are left somewhat vague, as project solutions are also not shareable on public pages.)

The goal of the project was to create and model a vivarium, including creatures with collision detection and interactivity using gradient descent.

GENERAL

Keyboard bindings were introduced to accomplish the following:

  - Spawn in creatures (Orca, Seal, Fish) or Food.
  - Clear objects in the tank.
  - Enable flocking behavior (when 5 or more Fish were present in the tank)

MODELS

A simple cubical mesh was provided as wall bounds for the Vivarium. Using provided mesh classes, Orca, Seal, Fish, and Food models were created. Orca, Seal, and Fish models were also created with simple static animations, as well as base attributes like a randomized vector direction, a speed, a hunger value, and other attributes to enable flocking.

COLLISION DETECTION

Collision detection between creatures was calculated per frame using spherical collision detection. When a creature collided with a wall or another creature of the same class, it would bounce at an equal angle to the perpendicular of the collision plane.

MOVEMENT AND INTERACTIONS

The rule of the tank was as follows: Orcas eat Seals and Fish; Seals eat Fish; Fish eat Food.

Creatures were programmed to face their direction of movement. Food models spawned in at random locations and fell slowly downward until hitting the bottom of the tank.

In order to simulate predator eating prey, when a predator creature collided with a prey creature, the prey creature would be flagged as "eaten" and disappear the next frame. Eating prey reduced the predator's hunger meter, which gave them less incentive to chase other prey.

General movement was implemented per frame and was calculated using Gaussian gradient descent. Prey creatures would seek directions away from predators, and predator creatures would seek the direction of prey. To avoid issues, predator and prey would have an additional gradient to disincentivize colliding with walls. This allowed prey to escape around the tank rather than get trapped between a predator and a wall. Lastly, randomness was added to the final vector direction to minimize stagnation and predictability.

Although the paradigm of movement did not allow for proper SLERP implementation, a modified SLERP implementation was constructed to simulate smoother movement.

BOIDS/FLOCKING

Fish flocking behavior was implemented using Craig Reynold's Boids Algorithm. This enabled groups of more than five Fish within a close vicinity to flock (come closer together) and share a movement direction. At a very close vicinity, though, Fish were incentivized to move apart to avoid collision.
