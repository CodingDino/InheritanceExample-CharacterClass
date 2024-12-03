#pragma once
#include "CharacterClass.h"
class Mage :
    public CharacterClass
{
public:

    // Constructors
    Mage();
    Mage(std::string newName);

    // Public functions
    void Fireball();

private:

    // Data Members
    int mana;
};

