# Ants-and-Doodlebugs
##### The goal for this programming project is to create a simple 2D predator-prey simulation. In this simulation the prey are ants and the predators are doodlebugs. These critters live in a 20 x 20 grid of cells. Only one critter may occupy a cell at a time. The grid is enclosed, so a critter is not allowed to move off the edges of the world. Time is simulated in steps. Each critter performs some action every time step.
##### The ants behave according to the following model:
  * Move: For every time step, the ants randomly try to move up, down, left, or right. If the neighboring cell in the selected direction is occupied or would move the ant off the grid, then the ant stays in the current cell. You are free to code this such that ants will always try to move to a free square if one exists or they can choose a direction at random and give up if it is occupied. You are not permitted to always choose the same direction though, it must be randomized.
  * Breed: If an ant survives for three time steps, at the end of the time step (i. e. after moving) the ant will breed. This is simulated by creating a new ant in an adjacent (up, down left, or right) cell that is empty. If there is no empty cell available, no breeding occurs. Once an offspring is produced an ant cannot produce an offspring again until it has survived three more time steps. If breeding fails because there is no room then the ant will also reset its timer.
##### The doodlebugs behave according to the following model:
  * Move: For every time step, the doodlebug will move to an adjacent cell containing an ant and eat the ant. If there are no ants in adjoining cells, the doodlebug moves according to the same rules as the ant. Note that a doodlebug cannot eat other doodlebugs.
  * Breed: If a doodlebug survives for eight time steps, at the end of the time step it will spawn off a new doodlebug in the same manner as the ant.
  * Starve: If a doodlebug has not eaten an ant within three time steps, at the end of the third time step it will starve and die. The doodlebug should then be removed from the grid of cells.

<a href="http://imgbox.com/MeYtJMqn" target="_blank"><img src="https://thumbs.imgbox.com/66/41/MeYtJMqn_t.png" alt="image host"/></a>
# __Getting Started__
##### For the other files of this program, please email me at joanel.vasquez1520@gmail.com explaning why you need the program. Put the name of the program in the subject and GITHUB. 
# __Prerequesites__
##### [C++](http://www.cyberprogrammers.net/2015/11/top-9-best-cc-ides-for-windowsmac-os.html) needs to be used in order to run this program. Follow the link provided that shows some C/C++ IDEs that could be used to run the program. 
# __Running the Program__
##### The functions to test the program must be written in the main.c file. Run the program and follow the instructions to test the program. 
# __Author__
##### This program was written by Joanel Vasquez
