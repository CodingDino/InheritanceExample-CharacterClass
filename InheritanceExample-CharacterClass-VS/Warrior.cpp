#include "Warrior.h"
#include <iostream>

Warrior::Warrior()
	: CharacterClass()
	, shieldStrength(20)
{
}

Warrior::Warrior(std::string newName)
	: CharacterClass(newName, 90, 50)
	, shieldStrength(20)
{
}

void Warrior::ShieldWall()
{
	std::cout << name << " lifts their shield. The next " << shieldStrength << " damage will be blocked.\n";
}
