#pragma once

#include <iostream>
#include "ASpell.hpp"
#include <map>

class SpellBook {
    private: 
        SpellBook(SpellBook const &);
        SpellBook & operator=(SpellBook const &);
        std::map<std::string, ASpell *> _spells;
    public:
        SpellBook();
        ~SpellBook();
        void learnSpell(ASpell * spell);
        void forgetSpell(const std::string& spellName);
        ASpell *createSpell(const std::string &);
};