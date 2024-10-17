#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell {
    protected:
        std::string _name;
        std::string _effects;
    public:
        ASpell();
        ASpell(const std::string& name, const std::string& effects);
        ASpell(ASpell const & src);
        virtual ~ASpell();
        std::string getName() const;
        std::string getEffects() const;
        virtual ASpell* clone() const = 0;
        ASpell & operator=(ASpell const & src);
        void launch(ATarget const & a);
};

#endif