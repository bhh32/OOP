#include <iostream>
#include "Person.h"

using std::cout;

void Person::Greeting(Person person)
{
	cout << "Hello, " << person.name << "!\n";
	printf("You are %d years old, and are %.1f feet tall!\n", person.age, person.height);
	printf("You weigh approx. %d lbs!\n", person.weight);
	cout << "Finally, you have " << person.hairColor << " hair, and " << person.eyeColor << " eyes!\n";
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