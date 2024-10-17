#include "Warlock.hpp"

Warlock::Warlock(){
}

Warlock::Warlock(std::string name ,std::string title) : _name(name), _title(title){
    std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(){
    std::cout << _name << ": My job here is done!\n";
    // for (std::map<std::string, ASpell*>::iterator it = _spells.begin(); it != _spells.end(); ++it)
    //     _spells.erase(it);
    // _spells.clear();
}
Warlock & Warlock::operator=(Warlock const & src){
    _name = src.getName();
    _title = src.getTitle();
    return *this;
}
Warlock::Warlock(Warlock const & src){
    *this = src;
}
const std::string & Warlock::getName() const{
    return _name;
}

const std::string & Warlock::getTitle() const{
    return _title;
}

void Warlock::setTitle(const std::string & str){
    _title = str;
}

void Warlock::introduce() const{
    std::cout << _name << ": I am "<< _name << ", " << _title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell* s){
    _spells.learnSpell(s);
    // if (s)
    // {
    //     _spells[s->getName()] = s;
    // }
}
void Warlock::forgetSpell(std::string spellName){
    _spells.forgetSpell(spellName);
    // if (_spells.find(spellName) != _spells.end())
    //     _spells.erase(_spells.find(spellName));
}
void Warlock::launchSpell(std::string spellName ,ATarget const & target){
    // std::map<std::string, ASpell*>::iterator it = _spells.find(spellName);
    // if (it != _spells.end())
    //     it->second->launch(target);
    if (_spells.createSpell(spellName))
        _spells.createSpell(spellName)->launch(target);
}