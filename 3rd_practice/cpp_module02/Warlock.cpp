#include "Warlock.hpp"

Warlock::Warlock(){

}
Warlock::Warlock(Warlock const & src){
    *this = src;
}
Warlock & Warlock::operator=(Warlock const & src){
    _name = src.getName();
    _title = src.getTitle();
    return *this;
}
Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title){
    std::cout << _name << ": This looks like another boring day." << std::endl;
}
Warlock::~Warlock(){
    std::cout << _name << ": My job here is done!" << std::endl;
    // for (std::map<std::string, ASpell*>::iterator it = _spells.begin(); it != _spells.end() ;++it)
    // {
    //     delete it->second;
    // }
    // _spells.clear();
}
const std::string& Warlock::getName() const{
    return _name;
}
const std::string& Warlock::getTitle() const{
    return _title;
}
void Warlock::setTitle(const std::string & title){
    _title = title;
}

void Warlock::introduce() const{
    std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}
void Warlock::learnSpell(ASpell * spell){
    if (spell)
    {
        _spells.learnSpell(spell);
    }
}
void Warlock::forgetSpell(std::string spellName){
    _spells.forgetSpell(spellName);
    // std::map<std::string, ASpell*>::iterator it = _spells.find(spellName);
    // if (it != _spells.end())
    // {
    //     delete it->second;
    //     _spells.erase(it);
    // }
}
void Warlock::launchSpell(std::string spellName, ATarget const& t) {
    if (_spells.createSpell(spellName))
        _spells.createSpell(spellName)->launch(t);

    // std::map<std::string, ASpell*>::iterator it = _spells.find(spellName);
    // if (it != _spells.end())
    //     it->second->launch(t);
}