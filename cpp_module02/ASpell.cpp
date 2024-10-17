#include "ASpell.hpp"

ASpell::ASpell(std::string name, std::string effects) : _name(name), _effects(effects){

}
ASpell::ASpell(ASpell const & src){
    *this = src;
}
ASpell & ASpell::operator=(ASpell const & src){
    _name = src.getName();
    _effects = src.getEffects();
    return *this;
}
ASpell::~ASpell(){

}

std::string ASpell::getName() const{
    return _name;
}
std::string ASpell::getEffects() const{
    return _effects;
}

void ASpell::launch(ATarget const & target) const{
    target.getHitBySpell(*this);
}