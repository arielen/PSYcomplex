#include "person.h"

Person::Person() : lastname{}, name{}, surname{}, age{}, gender{1} {}
Person::Person(
        const std::string &lastname, const std::string &name,
        const std::string &surname, const unsigned int &age,
        const bool &gender) :
    lastname{lastname}, name{name}, surname{surname}, age{age}, gender{gender} {}

std::string Person::getLastname() const {return lastname;}
std::string Person::getName() const {return name;}
std::string Person::getSurname() const {return surname;}
unsigned int Person::getAge() const {return age;}
bool Person::getGender() const {return gender;}
