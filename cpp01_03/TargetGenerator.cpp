#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}

TargetGenerator::TargetGenerator(TargetGenerator const & src){
    *this = src;
}
TargetGenerator::~TargetGenerator(){
    // if (!_target.empty())
    // {
    //     for (std::map<std::string, ASpell*>::iterator it = _target.begin(); it != _target.end(); ++it)
    //     {
    //         delete it->second;
    //         _target.erase(it);
    //     }
    //     _target.clear();
    // }
}

TargetGenerator & TargetGenerator::operator=(TargetGenerator const & src){
    _target = src._target;
    return *this;
}
void    TargetGenerator::learnTargetType(ATarget* t){
    if (t)
    {
        //if (_target.find(t->getType()) == _target.end())
            _target[t->getType()] = t;
    }
}
void    TargetGenerator::forgetTargetType(std::string const & t){
    std::map<std::string, ATarget*>::iterator it = _target.find(t);
    if (it != _target.end())
    {
        // delete it->second;
        _target.erase(it);
    }
}
ATarget* TargetGenerator::createTarget(std::string const & t){
    ATarget* tmp = NULL;
    if (_target.find(t) != _target.end())
        tmp = _target[t];
    return tmp;
}