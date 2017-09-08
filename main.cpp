#include "ants.h"

int main()
{
	srand(time(0));
	World world;
	bool continue_simulation = false;

	do
	{
		vector<Organism_ptr> ants;
		vector<Organism_ptr> doodlebugs;
		for (int i = 0; i < world.get_height(); i++)
		{
			for (int j = 0; j < world.get_width(); j++)
			{
				world[i][j]->draw();
				if (world[i][j]->who() == DOODLEBUGS)
				{
					doodlebugs.push_back(world[i][j]);
				}
			}
		}

		for (auto p = doodlebugs.begin(); p != doodlebugs.end(); p++)
		{
			(*p)->breed(world);
			(*p)->move(world);
			(*p)->starve(world);
		}
		for (int i = 0; i < world.get_height(); i++)
		{
			for (int j = 0; j < world.get_width(); j++)
			{
				if (world[i][j]->who() == ANTS)
				{
					ants.push_back(world[i][j]);
				}
			}
		}
		for (auto p = ants.begin(); p != ants.end(); p++)
		{
			(*p)->move(world);
			(*p)->breed(world);
		}
		cout << "\nPlease press ENTER to move to the next time step: " << endl;
		if (cin.get() == '\n')
		{
			continue_simulation = true;
		}
	} while (continue_simulation);
	
	return 0;
}