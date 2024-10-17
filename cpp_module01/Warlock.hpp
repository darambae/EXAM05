#pragma once

#include <iostream>
#include "ASpell.hpp"
#include <map>

class Warlock {
    private:
        Warlock();
        std::string _name;
        std::string _title;
        Warlock & operator=(Warlock const & src);
        Warlock(Warlock const & src);
        std::map<std::string, ASpell*> _spells;
    public:
        virtual ~Warlock();
        Warlock(std::string name ,std::string title);
        const std::string & getName() const;
        const std::string & getTitle() const;
        void  setTitle(const std::string &);
        void introduce() const;

        void learnSpell(ASpell*);
        void forgetSpell(std::string);
        void launchSpell(std::string ,ATarget const &);
};