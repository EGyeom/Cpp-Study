#pragma once
#include <iostream>

class Point
{
private:
	int posX;
	int posY;
public:
	Point(int x=0, int y=0) : posX(x), posY(y)
	{}
	void ShowPos() const
	{
		std::cout << "X pos : " << posX << "\t" << "Y pos : " << posY << "\n";
	}
	
};
//인라인과 템플릿
/*
대부분의 빌드 환경에서 인라인을 컴파일 도중에 삽입함
함수를 본문에 대체하려면 컴파일러가 함수의 형태를 알고 있어야함.

템플릿이 사용되는 부분에서 해당 템플릿을 인스턴스로 만드려면 컴파일러가 알고 있어야 함.
그러므로 대부분 헤더 파일에 존재하게됨.

*/
template<class T>
void SwapData(T* Data1, T* Data2)
{
	T temp = *Data1;
	*Data1 = *Data2;
	*Data2 = temp;
}
