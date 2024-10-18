#include "ATarget.hpp"

ATarget::ATarget(){

}
ATarget::ATarget(ATarget const & src){
    *this = src;
}
ATarget & ATarget::operator=(ATarget const & src){
    _type = src.getType();
    return *this;
}
ATarget::ATarget(std::string type) : _type(type){

}
ATarget::~ATarget(){

}
const std::string&ATarget:: getType() const{
    return _type;
}

void ATarget::getHitBySpell(ASpell const & s) const{
    std::cout << _type << " has been " << s.getEffects() << "!" << std::endl;
}