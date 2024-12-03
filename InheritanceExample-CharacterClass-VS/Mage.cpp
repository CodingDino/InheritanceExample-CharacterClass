#include "Mage.h"
#include <iostream>

Mage::Mage()
	: CharacterClass("Mage", 20, 90)
	, mana(100)
{
}

Mage::Mage(std::string newName)
	: CharacterClass(newName, 20, 90)
	, mana(100)
{
}

void Mage::Fireball()
{
	mana -= 20;
	std::cout << name << " casts a massive fireball. They use 20 mana and have " << mana << " mana remaining.\n";
}
