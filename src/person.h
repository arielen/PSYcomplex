#ifndef PERSON_H
#define PERSON_H
#include <iostream>

class Person
{
protected:
    std::string lastname, name, surname;
    unsigned int age;
    bool gender;

public:
    Person();
    Person(const std::string &lastname, const std::string &name,
           const std::string &surname, const unsigned int &age,
           const bool &gender);
    ~Person();

    std::string getLastname() const;
    std::string getName() const;
    std::string getSurname() const;
    unsigned int getAge() const;
    bool getGender() const;

};

#endif // PERSON_H
