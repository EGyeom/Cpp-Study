#pragma once
#include "Declaration.h"
class AccountHandling // 추상클래스 : 기능이 없는 기초클래스
{
public:
	//순수가상함수 : 상속 받는 유도클래스에서 기능을 정의하여 사용하겠다.
	virtual void ShowExceptionMassage() = 0;
};

