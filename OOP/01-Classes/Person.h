#pragma once

#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person
{
public:
	// Functions
	void Greeting(Person person);
	void Greeting();
	Person();
	Person(int pAge, float pHeight, int pWeight, std::string pName, std::string pHairColor, std::string pEyeColor);

	/* Sets The Attributes : I.E. Setters */
	void SetAttributes(Person &person, int age, float height, int weight, std::string name, std::string hairColor, std::string eyeColor);
	void SetName(Person &person, std::string name);
	void SetAge(Person &person, int age);
	void SetHeight(Person &person, float height);
	void SetWeight(Person &person, int weight);
	void SetHairColor(Person &person, std::string color);
	void SetEyeColor(Person &person, std::string color);

	/* Gets Specific Attributes For Use : I.E. Getters */
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