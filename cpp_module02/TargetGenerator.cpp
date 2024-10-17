#include "TargetGenerator.hpp"

TargetGenerator & TargetGenerator::operator=(TargetGenerator const & src){
    _targets = src._targets;
    return *this;
}
TargetGenerator::TargetGenerator(TargetGenerator const & src){
    *this = src;
}
TargetGenerator::TargetGenerator(){

}
TargetGenerator::~TargetGenerator(){
    for (std::map<std::string, ATarget*>::iterator it = _targets.begin(); it != _targets.end(); ++it)
    {   
        delete it->second; 
        _targets.erase(it);
    }
    _targets.clear();
}
void TargetGenerator::learnTargetType(ATarget* t){
    if (t)
    {
        _targets[t->getType()] = t->clone();
    }
}
void TargetGenerator::forgetTargetType(std::string const & str){
    std::map<std::string, ATarget*>::iterator it = _targets.find(str);
    if (it != _targets.end())
    {
        delete it->second;
        _targets.erase(it);
    }
}
ATarget* TargetGenerator::createTarget(std::string const & str){
    ATarget* tmp = NULL;
    if (_targets.find(str) == _targets.end())
        tmp = _targets[str];
    return tmp;
}