#include <iostream>
#include "Person.h"

Person::Person()
{
	fullName = "";
	happiness = 50;
}

Person::Person(std::string intName, int intHappiness)
{
	fullName = intName;
	happiness = intHappiness;
}

void Person::Greet()
{
	std::cout << "Howdy! My name is " << fullName << ".\n";
}

bool Person::IsHappy()
{
	return happiness > 70;
}