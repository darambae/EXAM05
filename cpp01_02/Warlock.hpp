
#ifndef WARLOCK_H
#define WARLOCK_H
#include <iostream>
#include <map>
#include "ASpell.hpp"

class ASpell;

class Warlock {
    private:
        Warlock();
        Warlock(Warlock const & src);
        Warlock& operator=(Warlock const & src);
        std::string _name;
        std::string _title;
        std::map< std::string, ASpell* > _spells;
    public:
        Warlock(const std::string& name, const std::string& title);
        const std::string&  getName() const;
        const std::string&  getTitle() const;
        void    setTitle(const std::string& title);
        void    introduce() const;
        void    learnSpell(ASpell* spell);
        void    forgetSpell(std::string spellName);
        void    launchSpell(std::string spellName, ATarget& target);
        ~Warlock();
};

#endif