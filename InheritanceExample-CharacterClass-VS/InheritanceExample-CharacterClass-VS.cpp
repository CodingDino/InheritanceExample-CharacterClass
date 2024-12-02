#include <iostream>
#include "CharacterClass.h"

int main()
{
	CharacterClass* testChar = new CharacterClass("Maximus", 150, 20);
	testChar->DisplayStats();
	delete testChar;
	testChar = nullptr;
}
