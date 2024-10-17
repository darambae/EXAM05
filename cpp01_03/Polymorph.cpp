
#include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "turned into a critter"){
    //std::cout << "poly" << std::endl;
} 

Polymorph::~Polymorph(){}

ASpell* Polymorph::clone() const {
    return new Polymorph();
}
