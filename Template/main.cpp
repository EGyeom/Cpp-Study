#include "Point.h"
template<class T>
T sumArray(T arr[], int len)
{
	T sum = (T)0;
	for (int i = 0; i < len; i++)
	{
		sum += arr[i];
	}

	return sum;
}

int main()
{

	Point point1(2, 5);
	Point point2(10, 15);

	std::cout << "-- Before --" << "\n";
	point1.ShowPos();
	point2.ShowPos();

	//객체를 대상으로도 template 사용이 가능하다.
	SwapData(&point1, &point2);

	std::cout << "-- After --" << "\n";
	point1.ShowPos();
	point2.ShowPos();

	int arrint[10];
	for (int i = 0; i < 10; i++)
	{
		arrint[i] = i + 1;
	}
	std::cout << sumArray(arrint, 10) << "\n";

	char arrchar[10];
	for (int i = 0; i < 10; i++)
	{
		arrchar[i] = (char)i+1;
		std::cout << (char)i + 1;
	}
	//ASCII CODE로 55가 7을 의미함
	std::cout << sumArray(arrchar, 10) << "\n";
}