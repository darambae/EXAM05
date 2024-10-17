#include "ATarget.hpp"


ATarget::ATarget(const std::string& type) : _type(type){}
ATarget::ATarget(ATarget const & src){
    *this = src;
}
ATarget::~ATarget(){}
const std::string& ATarget::getType() const{
    return _type;
}

ATarget & ATarget::operator=(ATarget const & src){
    _type = src.getType();
    return *this;
}
void    ATarget::getHitBySpell(ASpell const & a) const {
    std::cout << getType() << " has been " << a.getEffects() << "!\n";
}