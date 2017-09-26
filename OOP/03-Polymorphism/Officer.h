#pragma once
#include "Person.h"


class Officer : public Person
{
protected:
	int badgeNum;

public:
	Officer();
	Officer(std::string intName, int intHappiness, int intBadgeNum);


	virtual void Greet() override;
};