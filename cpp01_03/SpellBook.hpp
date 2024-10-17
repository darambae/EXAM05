#pragma once

#include <iostream>
#include "ASpell.hpp"
#include <map>

class SpellBook {
    private:
        SpellBook(SpellBook const & src);
        SpellBook & operator=(SpellBook const & src);
        std::map<std::string, ASpell*> _spells;
    public:
        SpellBook();
        void learnSpell(ASpell*);
        void forgetSpell(std::string const &);
        ASpell* createSpell(std::string const &);
        ~SpellBook();
};