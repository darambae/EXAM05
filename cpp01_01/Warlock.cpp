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
}

const std::string& Warlock::getName() const {
    return _name;
}

const std::string& Warlock::getTitle() const {
    return _title;
}

void Warlock::setTitle(const std::string& title)
{
    this->_title = title;
}

void Warlock::introduce() const {
    std::cout << getName() << ": I am " << getName() << ", " << getTitle() << std::endl;
}