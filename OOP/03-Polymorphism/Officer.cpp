#include "Officer.h"
#include <iostream>


Officer::Officer()
{
	fullName = "";
	happiness = 50;
	badgeNum = 0;
}

Officer::Officer(std::string intName, int intHappiness, int intBadgeNum)
{
	fullName = intName;
	happiness = intHappiness;
	badgeNum = intBadgeNum;
}

void Officer::Greet()
{
	Person::Greet();
	std::cout << "Officer badge number #" << badgeNum << ".\n";
}