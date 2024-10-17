#include "SpellBook.hpp"
SpellBook::SpellBook(){}

SpellBook & SpellBook::operator=(SpellBook const & src){
    _spells = src._spells;
    return *this;
}
SpellBook::SpellBook(SpellBook const & src){
    *this = src;
}
SpellBook::~SpellBook(){
    for (std::map<std::string, ASpell*>::iterator it = _spells.begin(); it != _spells.end(); ++it)
    {   
        delete it->second; 
        _spells.erase(it);
    }
    _spells.clear();
}
void SpellBook::learnSpell(ASpell* s){
    if (s)
        _spells[s->getName()] = s->clone();
}
void SpellBook::forgetSpell(std::string const & str){
    std::map<std::string, ASpell*>::iterator it = _spells.find(str);
    if (it != _spells.end())
    {
        delete it->second;
        _spells.erase(it);
    }
}

ASpell* SpellBook::createSpell(std::string const & str){
    ASpell* tmp = NULL;
    if (_spells.find(str) == _spells.end())
        tmp = _spells[str];
    return tmp;
}