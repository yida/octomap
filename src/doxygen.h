/**
 * This file is intentionally left blank ;)
 * (just containing some doxygen definitions)
 *
 *
 * @defgroup math Math
 *
 * @defgroup octomap Octomap
 *
 * @defgroup visualization Visualization
 *
 */

/** \mainpage Octomap

  \section intro_sec Introduction

  The <a href="http://octomap.sourceforge.net/">Octomap library</a>
  implements a 3D occupancy grid mapping approach. It provides data
  structures and mapping algorithms. The map is implemented using an
  \ref octomap::OcTree "Octree". It is designed to meet the following
  requirements: </p>

<ul>
<li>
<b>Full 3D model.</b>  The map is able to model arbitrary environments
without prior assumptions about it. The representation models occupied
areas as well as free space. If no information is available about an
area (commonly denoted as <i>unknown areas</i>), this information is
encoded as well.  While the distinction between free and occupied
space is essential for safe robot navigation, information about
unknown areas is important, e.g., for autonomous exploration of an
environment.
</li>
<li>
<b>Updatable.</b>  It is possible to add new information or sensor
 readings at any time. Modeling and updating is done in
 a <i>probabilistic</i> fashion. This accounts for sensor noise or
 measurements which result from dynamic changes in the environment,
 e.g., because of dynamic objects.  Furthermore, multiple robots are
 able to contribute to the same map and a previously recorded map is
 extendable when new areas are explored.

</li>
<li>
<b>Flexible.</b>  The extent of the map does not have to be known in
advance. Instead, the map is dynamically expanded as needed. The map
is multi-resolution so that, for instance, a high-level planner is
able to use a coarse map, while a local planner may operate using a
fine resolution. This also allows for efficient visualizations which
scale from coarse overviews to detailed close-up views.
</li>
<li>
<b>Compact.</b>  The is stored efficiently, both in memory and on
disk. It is possible to generate compressed files for later usage or
convenient exchange between robots even under bandwidth constraints.
</li>
</ul>

<p> Octomap is actively maintained by <a
href="http://www.informatik.uni-freiburg.de/~wurm">Kai M. Wurm</a> and
<a href="http://www.informatik.uni-freiburg.de/~hornunga">Armin
Hornung</a>. Feel free to contact us.</p>

  \section install_sec Installation
    See the file README.txt in the main folder.

**/

/**
 * \namespace octomath Namespace of the mini-math library in Octomap
 *
 */

/**
 * \namespace octomap Namespace the Octomap library
 *
 */


