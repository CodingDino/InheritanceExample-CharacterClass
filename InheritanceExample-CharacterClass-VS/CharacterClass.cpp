#include "CharacterClass.h"
#include <iostream>

CharacterClass::CharacterClass()
	: name("")
	, health(0)
	, attackPower(0)
{
}

CharacterClass::CharacterClass(std::string newName, int newHealth, int newAttackPower)
	: name(newName)
	, health(newHealth)
	, attackPower(newAttackPower)
{
}

void CharacterClass::DisplayStats()
{
	std::cout << "Name: " << name << "\t\t";
	std::cout << "HP: " << health << "\t\t";
	std::cout << "AP: " << attackPower << "\n";
}
