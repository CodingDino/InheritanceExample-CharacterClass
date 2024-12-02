#pragma once
#include <string>

class CharacterClass
{
public:

	// Constructors
	CharacterClass();
	CharacterClass(std::string newName, int newHealth, int newAttackPower);

	// public functions
	void DisplayStats();

private:

	// Data members
	std::string name;
	int health;
	int attackPower;
};

