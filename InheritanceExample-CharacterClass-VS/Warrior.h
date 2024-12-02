#pragma once
#include "CharacterClass.h"
class Warrior :
    public CharacterClass
{
public:

    // Constructors
    Warrior();
    Warrior(std::string newName);

    // Public functions
    void ShieldWall();

private:

    // Data Members
    int shieldStrength;
};

