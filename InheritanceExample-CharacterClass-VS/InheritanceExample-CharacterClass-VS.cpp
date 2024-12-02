#include <iostream>
#include "Warrior.h"

int main()
{
	Warrior* testChar = new Warrior("Maximus");
	testChar->DisplayStats();
	testChar->ShieldWall();
	delete testChar;
	testChar = nullptr;
}
