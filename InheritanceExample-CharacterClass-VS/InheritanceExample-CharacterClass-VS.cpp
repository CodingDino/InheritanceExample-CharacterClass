#include <iostream>
#include "Warrior.h"
#include "Mage.h"
#include "Rogue.h"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

int main()
{
	srand(time(0));

	std::cout << "-------- Character Class Tester --------\n";

	std::string input = "";

	while (input != "q" && input != "Q")
	{
		int classChoice = 0;

		std::cout << "Enter the number for the class you would like to test:\n";
		std::cout << "\t1. Warrior\n";
		std::cout << "\t2. Mage\n";
		std::cout << "\t3. Rogue\n";
		std::cin >> classChoice;
		std::getline(std::cin, input);


		std::cout << "Enter the name of your character:\n";
		std::string name;
		std::getline(std::cin, name);

		if (classChoice == 1)
		{
			Warrior* character = new Warrior(name);
			character->DisplayStats();
			character->ShieldWall();
			delete character;
			character = nullptr;
		}
		if (classChoice == 2)
		{
			Mage* character = new Mage(name);
			character->DisplayStats();
			character->Fireball();
			delete character;
			character = nullptr;
		}
		if (classChoice == 3)
		{
			Rogue* character = new Rogue(name);
			character->DisplayStats();
			character->SneakAttack();
			delete character;
			character = nullptr;
		}

		std::cout << "Press enter to test another character or Q to quit.\n";
		std::getline(std::cin, input);
	}

}
