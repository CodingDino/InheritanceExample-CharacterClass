#pragma once
#include "CharacterClass.h"
class Rogue :
    public CharacterClass
{
public:

    // Constructors
    Rogue();
    Rogue(std::string newName);

    // Public functions
    void SneakAttack();

private:

    // Data Members
    int critChance;
};

