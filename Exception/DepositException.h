#pragma once
#include "AccountHandling.h"
class DepositException :
	public AccountHandling
{
private:
	int money;
public:
	DepositException(int Deposit) : money(Deposit) {}
	void ShowExceptionMassage()
	{	
		std::cout << "입금 금액 : " << money << std::endl;
		std::cout << "Error 발생" << std::endl;
		std::cout << "0보다 작은 금액을 입금 할 수 없습니다." << std::endl;
	}
};

