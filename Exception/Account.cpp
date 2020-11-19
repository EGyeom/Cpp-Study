#include "Account.h"

void Account::Deposit(int money) throw(AccountHandling)
{
	if (money < 0)
	{
		throw DepositException(money);
	}
	else
	{
		balance += money;
		std::cout << "ÇöÀç ÀÜ¾× : " << balance << std::endl;
	}
}
