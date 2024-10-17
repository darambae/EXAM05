#ifndef ATARGET_HPP
#define ATARGET_HPP

#include "ASpell.hpp"
#include <iostream>

class ASpell;

class ATarget {
    protected:
        std::string _type;
    public:
        ATarget();
        ATarget(const std::string& type);
        ATarget(ATarget const & src);
        virtual ~ATarget();
        const std::string& getType() const;
        virtual ATarget* clone() const = 0;
        ATarget & operator=(ATarget const & src);
        void    getHitBySpell(ASpell const & a) const;
};

#endif