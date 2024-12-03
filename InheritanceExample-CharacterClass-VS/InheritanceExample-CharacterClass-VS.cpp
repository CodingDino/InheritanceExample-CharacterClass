#include <iostream>
#include "Warrior.h"
#include "Mage.h"

int main()
{
	Mage* testChar = new Mage("Rincewind");
	testChar->DisplayStats();
	testChar->Fireball();
	delete testChar;
	testChar = nullptr;
}
