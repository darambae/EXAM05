#include "ASpell.hpp"
ASpell::ASpell(){}
ASpell::ASpell(ASpell const & src)
{
    *this = src;
}
ASpell::~ASpell(){}

ASpell::ASpell(const std::string& name, const std::string& effects) : _name(name), _effects(effects){}

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
void ASpell::launch(ATarget const & a){
    a.getHitBySpell(*this);
}
