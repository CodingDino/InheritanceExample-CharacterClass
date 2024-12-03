#include <iostream>
#include "Warrior.h"
#include "Mage.h"
#include "Rogue.h"

int main()
{
	Rogue* testChar = new Rogue("Garret");
	testChar->DisplayStats();
	testChar->SneakAttack();
	testChar->SneakAttack();
	testChar->SneakAttack();
	testChar->SneakAttack();
	delete testChar;
	testChar = nullptr;
}
