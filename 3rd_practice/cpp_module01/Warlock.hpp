#pragma once

#include <iostream>
#include "ATarget.hpp"
#include <map>

class Warlock {
    private:
        std::string _name;
        std::string _title;
        Warlock();
        Warlock(Warlock const &);
        Warlock & operator=(Warlock const &);
        std::map<std::string, ASpell *> _spells;

    public:
        Warlock(std::string name, std::string title);
        ~Warlock();
        const std::string& getName() const;
        const std::string& getTitle() const;
        void setTitle(const std::string &);
        void introduce() const;

        void learnSpell(ASpell * spell);
        void forgetSpell(std::string spellName);
        void launchSpell(std::string spellName, ATarget const & t);
};