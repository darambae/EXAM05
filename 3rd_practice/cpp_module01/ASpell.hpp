#pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell {
    protected:
        std::string _name;
        std::string _effects;
    public:
        ASpell();
        ASpell(ASpell const &);
        ASpell & operator=(ASpell const &);
        ASpell(std::string name, std::string effects);
        virtual ~ASpell();
        std::string getName() const;
        std::string getEffects() const;
        virtual ASpell *clone() const = 0;
        void launch(ATarget const &) const;
};