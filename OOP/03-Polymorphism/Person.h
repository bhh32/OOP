#pragma once

#include <string>

class Person
{
protected:
	std::string fullName;

	int happiness;

public:
	Person();
	Person(std::string intName, int intHappiness);

	// Prints greeting to the console
	virtual void Greet();

	// Returns true of happy, and false if not.
	bool IsHappy();
};