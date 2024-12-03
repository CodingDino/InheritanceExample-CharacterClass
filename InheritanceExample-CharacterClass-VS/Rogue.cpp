#include "Rogue.h"
#include <iostream>
#include <stdlib.h>     /* srand, rand */

Rogue::Rogue()
	: CharacterClass("Rogue", 50, 50)
	, critChance (50)
{
}

Rogue::Rogue(std::string newName)
	: CharacterClass(newName, 50, 50)
	, critChance(50)
{
}

void Rogue::SneakAttack()
{
	std::cout << name << " sneaks up behind their target and attacks! ";

	int attackDamage = attackPower;
	int randNum = rand() % 100;
	if (randNum < critChance)
	{
		attackDamage *= 2;
		std::cout << "They get a critical hit and deal x2 damage for a total of " 
			<< attackDamage <<" damage!\n";
	}
	else
	{
		std::cout << "They deal "
			<< attackDamage << " damage.\n";
	}
}
