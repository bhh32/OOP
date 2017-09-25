#pragma once


#ifndef PIGGY_H
#define PIGGY_H

class DigitalPiggyBank
{
private:
	// Maintains the current balance of the piggy bank
	float currentBalance = 0.f;

public:
	// Add funds to the value of the current balance
	void Deposit(float net);
	
	// Returns and clears the total current balance
	float Withdraw();

	float GetBalance() const;

	void SetBalance(float setAmount);
};


#endif PIGGY_H