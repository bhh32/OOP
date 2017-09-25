#include "Piggy.h"
#include <iostream>

using std::cout;
using std::endl;

void DigitalPiggyBank::Deposit(float net)
{
	currentBalance = GetBalance() + net;
}

float DigitalPiggyBank::Withdraw()
{
	float withdrawal = GetBalance();
	currentBalance = 0.f;

	return withdrawal;
}

float DigitalPiggyBank::GetBalance() const
{
	return currentBalance;
}