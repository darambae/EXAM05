#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){

}
TargetGenerator::TargetGenerator(TargetGenerator const & src){
    *this = src;
}
TargetGenerator & TargetGenerator::operator=(TargetGenerator const & src){
    _targets = src._targets;
    return *this;
}


TargetGenerator::~TargetGenerator(){
    for (std::map<std::string, ATarget*>::iterator it = _targets.begin(); it != _targets.end() ;++it)
    {
        delete it->second;
    }
    _targets.clear();
}

void TargetGenerator::learnTargetType(ATarget * target){
    if (target)
    {
        _targets[target->getType()] = target->clone();
    }
}

void TargetGenerator::forgetTargetType(const std::string & targetName){
    std::map<std::string, ATarget*>::iterator it = _targets.find(targetName);
    if (it != _targets.end())
    {
        delete it->second;
        _targets.erase(it);
    }
}
ATarget* TargetGenerator::createTarget(const std::string & s){
    ATarget *tmp = NULL;
    if (_targets.find(s) != _targets.end())
        tmp = _targets[s];
    return tmp;
}
