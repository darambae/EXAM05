#include "Warlock.hpp"

Warlock::Warlock(){}
Warlock::Warlock(const std::string& name, const std::string& title): _name(name), _title(title) {
    std::cout << _name << ": This looks like another boring day." << std::endl;
}
Warlock::Warlock(Warlock const & src){
    *this = src;
}


Warlock& Warlock::operator=(Warlock const & src){
    if (this != &src)
    {
        _title = src.getTitle();
        _name = src.getName();
    }
    return *this;
}
Warlock::~Warlock(){
    std::cout << getName() << ": My job here is done!" << std::endl;
    // for (std::map<std::string, ASpell*>::iterator it = _spell->_spells.begin(); it != _spell->_spells.end(); ++it)
    //     delete it->second;
    // _spell->_spells.clear();
}

std::string Warlock::getName() const {
    return _name;
}

std::string Warlock::getTitle() const {
    return _title;
}

void Warlock::setTitle(const std::string& title)
{
    this->_title = title;
}

void Warlock::introduce() const {
    std::cout << getName() << ": I am " << getName() << ", " << getTitle() << "!" << std::endl;
}

void    Warlock::learnSpell(ASpell* spell){
    _spell.learnSpell(spell);
    // if (spell)
    // {
    //     if (_spells.find(spell->getName()) == _spells.end())
    //         _spells[spell->getName()] = spell->clone();
    // }
}
void    Warlock::forgetSpell(std::string spellName){
    _spell.forgetSpell(spellName);
    // if (_spells.find(spellName) != _spells.end())
    // {
    //     delete _spells[spellName]; // deallocating memory
    //    _spells.erase(_spells.find(spellName)); //removing the pointer and its key from the map
    // }
}
void    Warlock::launchSpell(std::string spellName, ATarget & target){
    if (_spell.createSpell(spellName))
        _spell.createSpell(spellName)->launch(target);
    // if (_spell._spells.find(spellName) != _spell..end())
    //     _spell->_spells[spellName]->launch(target);
}