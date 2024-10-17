#include "ASpell.hpp"

ASpell::ASpell(ASpell const & src)
{
    *this = src;
}
ASpell::~ASpell(){}

ASpell::ASpell(std::string name, std::string effects) : _name(name), _effects(effects){}

std::string ASpell::getName() const {
    return _name;
}

std::string ASpell::getEffects() const {
    return _effects;
}

ASpell & ASpell::operator=(ASpell const & src)
{
    _name = src.getName();
    _effects = src.getEffects();
    return *this;
}
void ASpell::launch(ATarget const & a) const{
    a.getHitBySpell(*this);
}
