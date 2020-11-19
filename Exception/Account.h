#pragma once
#include "DepositException.h"

class Account
{
	int balance;
public:
	Account(int money) : balance(money) {}
	void Deposit(int money);
};

