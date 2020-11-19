#include "Account.h"
/*
 예외처리 Exception Handling
 예외처리를 위한 c++의 기능
 try
 {
	//예외발생시
	throw value;
 }
 catch(var name)
 {
	//예외처리
 }
 의 방식으로 예외처리가 가능함

 예외 클래스로 예외 처리도 가능함.

 예외 던지기도 가능함 => try-catch이 두번 사용되어야함

 new 연산자에 의한 예외는 bad_alloc 이라는 클래스로 따로 정해져있다.
 
*/
int main()
{
	Account account(10000);

	try//예외 검사할 부분
	{
		account.Deposit(1000); // 정상 작동
		account.Deposit(-200); // 에러 발생
	}
	catch(AccountHandling& temp) // 예외 처리부분
	{
		temp.ShowExceptionMassage();
	}

}