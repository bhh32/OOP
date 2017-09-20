#pragma once

#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person
{
public:
	// Functions
	void Greeting(Person person);


	/* Sets The Attributes */
	void SetAttributes(Person &person, int age, float height, int weight, std::string name, std::string hairColor, std::string eyeColor);
	
	/* Gets Specific Attributes For Use */
	std::string GetName(Person person);
	int GetAge(Person person);
	float GetHeight(Person person);
	int GetWeight(Person person);
	std::string GetHairColor(Person person);
	std::string GetEyeColor(Person person);

private:
	// Variables
	
	// Encapsulated Information
	int age;
	float height;
	int weight;
	std::string name;
	std::string hairColor;
	std::string eyeColor;
};


#endif PERSON_H