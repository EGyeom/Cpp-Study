#pragma once
#include <iostream>


//템플릿 클래스
template<class T>
class Point {
private:
	T Xpos;
	T Ypos;
public:
	Point(T x, T y) : Xpos(x), Ypos(y)
	{}
	void showData()
	{
		std::cout << "X pos : " << Xpos << "\n"
			<< "Y pos : " << Ypos << "\n";
	}
};

/* 1. 템플릿 클래스 특수화
 -> 템플릿 함수, 클래스는 각각의 자료형마다 하나씩 함수 및 클래스가 생성된다.
 이때 class Point<int>등으로 특수화 시키면 새로 생성되지않고 int 자료형일때 앞의 클래스가 생성된다.
 */
template<>
class Point<int>
{
private:
	int Xpos;
	int Ypos;
public:
	Point(int x, int y) : Xpos(x), Ypos(y)
	{}
	void showData()
	{
		std::cout << "X pos : " << Xpos << "\n"
			<< "Y pos : " << Ypos << "\n";
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

