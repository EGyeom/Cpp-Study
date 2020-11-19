#include <iostream>
/*
C++의 형변환 연산자
	dynamic_cast<T>(expt)	  : 유도클래스의 포인터 및 참조형 데이터를 기초 클래스의 포인터 및 참조형 데이터로 형 변환, 그외의 경우는 컴파일 에러를 발생시킴
	static_cast<T>(expt)	  : 유도클래스 <-> 기초클래스의 형변환 및 기본자료형의 다양한 형변환이 가능하지만 프로그래머가 책임져야함
	const_cast<T>(expt)		  : const 성향을 삭제하기위해 사용됨
	reinterpret_cast<T>(expt) : 포인터를 대상으로 하는, 포인터와 관련이 있는 모든 유형의 자료형으로의 형 변환을 위해 사용됨
*/

class baseClass {
private:
	int one;
public:
	baseClass(int value) : one(value)
	{}
	int getOne() { return one; }
	virtual void showData() = 0;
};

class subClass : public baseClass
{
	int two;
public:
	subClass(int a, int b) : baseClass(a), two(b) {}

	int getTwo() { return two; }
	void showData()
	{
		std::cout << baseClass::getOne() << std::endl;
		std::cout << two << std::endl;
	}
};

void showString(char* temp)
{
	std::cout << temp << std::endl;
}

int main(){

	const char* str = "Hello World";
	
	//showString(str); 이 경우 오류가 발생함. 파라미터는 char* 이기 때문이다.
	showString(const_cast<char*>(str)); // 상수인 변수를 함수에 넣어주기 위한 형 변환으로 주로 사용된다.

	baseClass* pbase = new subClass(1, 2);

	subClass* psub = new subClass(1, 2);

	std::cout << dynamic_cast<baseClass*>(psub)->getOne() << std::endl;
	std::cout << dynamic_cast<subClass*>(pbase)->getTwo() << std::endl;  // 기초클래스에서 유도 클래스로 형변환이 가능한 이유는 순수가상함수가 하나라도 있다면 dynamic_cast로 형변환이 가능하다.
	std::cout << static_cast<subClass*>(pbase)->getTwo() << std::endl;  // 

	//reinterpret_cast 사용 예

	int test = 0x00010203;
	int test2 = 0x010203;
	char* ptr = reinterpret_cast<char*>(&test); //int* -> char* 

	std::cout << static_cast<int>(*(ptr + 0)) << std::endl; // char -> int 
	std::cout << static_cast<int>(*(ptr + 1)) << std::endl; // char -> int 
	std::cout << static_cast<int>(*(ptr + 2)) << std::endl; // char -> int 
	std::cout << static_cast<int>(*(ptr + 3)) << std::endl; // char -> int 

}