#include <iostream>
#include "Person.h"

using std::cout;

Person::Person()
{ }

Person::Person( int pAge, float pHeight, int pWeight, std::string pName, std::string pHairColor, std::string pEyeColor)
{
	name = pName;
	age = pAge;
	height = pHeight / 12.f;
	weight = pWeight;
	hairColor = pHairColor;
	eyeColor = pEyeColor;
}

void Person::Greeting(Person person)
{
	cout << "Hello, " << person.name << "!\n";
	printf("You are %d years old, and are %.1f feet tall!\n", person.age, person.height);
	printf("You weigh approx. %d lbs!\n", person.weight);
	cout << "Finally, you have " << person.hairColor << " hair, and " << person.eyeColor << " eyes!\n";
}

void Person::Greeting()
{
	cout << "Hello, " << name << "!\n";
}

void Person::SetAttributes(Person &person, int age, float height, int weight, std::string name, std::string hairColor, std::string eyeColor)
{
	person.age = age;
	person.height = height / 12.f;
	person.weight = weight;
	person.name = name;
	person.hairColor = hairColor;
	person.eyeColor = eyeColor;
}

void Person::SetName(Person &person, std::string name)
{
	person.name = name;
}

void Person::SetAge(Person &person, int age)
{
	person.age = age;
}

void Person::SetHeight(Person &person, float height)
{
	person.height = height / 12.f;
}

void Person::SetWeight(Person &person, int weight)
{
	person.weight = weight;
}

void Person::SetHairColor(Person &person, std::string color)
{
	person.hairColor = color;
}

void Person::SetEyeColor(Person &person, std::string color)
{
	person.eyeColor = color;
}

std::string Person::GetName(Person person)
{
	return person.name;
}

int Person::GetAge(Person person)
{
	return person.age;
}

float Person::GetHeight(Person person)
{
	return person.height;
}

int Person::GetWeight(Person person)
{
	return person.weight;
}

std::string Person::GetHairColor(Person person)
{
	return person.hairColor;
}

std::string Person::GetEyeColor(Person person)
{
	return person.eyeColor;
}