#ifndef TEST_H
#define TEST_H
#include <iostream>
#include <ctime>
#include "person.h"

class Test
{
protected:
    Person person;
    time_t timeBegin;

public:
    Test();
    Test(const Person &person);
    ~Test();
};

#endif // TEST_H
