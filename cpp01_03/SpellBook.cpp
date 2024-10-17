#include "SpellBook.hpp"


SpellBook::SpellBook(){}
SpellBook::SpellBook(SpellBook const & src){
    *this = src;
}
SpellBook & SpellBook::operator=(SpellBook const & src){
    _spells = src._spells;
    return *this;
}


void SpellBook::learnSpell(ASpell* spell){
    if (spell)
        _spells[spell->getName()] = spell->clone();
}

void SpellBook::forgetSpell(std::string const &spellName){
    std::map<std::string, ASpell*>::iterator it = _spells.find(spellName);
    if (it != _spells.end())
    { 
        delete it->second;
        _spells.erase(it);
    }
}

ASpell* SpellBook::createSpell(std::string const & spell){
    ASpell* tmp = NULL;
    if (_spells.find(spell) != _spells.end())
        tmp = _spells[spell];
    return tmp;
}

SpellBook::~SpellBook(){
    for (std::map<std::string, ASpell*>::iterator it = _spells.begin(); it != _spells.end(); ++it)
    {
        delete it->second;
        // _spells.erase(it);
    }
    _spells.clear();
}