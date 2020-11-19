#include "Point.h"
//#define _1118
#define _1119
#ifdef _1118

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
		arrchar[i] = (char)i + 1;
		std::cout << (char)i + 1;
	}
	//ASCII CODE로 55가 7을 의미함
	std::cout << sumArray(arrchar, 10) << "\n";
}

#endif

#ifdef _1119


/*
1.함수, 클래스 템플릿 특수화
2.템플릿 인자 변수로 사용가능, 디폴트값 선언 가능
3.템플릿 static
*/

/*
   1. 템플릿 함수 특수화
*/

template<class T>
void ShowData(T Data)
{
	std::cout << "Data : " << Data << std::endl;
}

template<>
void ShowData<Point<int>>(Point<int> temp)
{
	temp.showData();
}
/*

2. 템플릿 인자 변수 사용, 디폴트값 선언
3. 템플릿 static

*/
template<typename T =int, int len = 8>
class varArray {
	T arr[len];
	static T Data;
public:
	varArray()
	{
		Data++;
		for (int i = 0; i < len; i++)
		{
			arr[i] = i + 1;
		}
	}
	void showData()
	{
		for (int i = 0; i < len; i++)
		{
			std::cout << arr[i] << " ";
		}
		std::cout << "\n";
	}

	static void showNum()
	{
		std::cout << Data << std::endl;
	}
};
template<typename T, int len>
T varArray<T, len>::Data = 0;

int main()
{
	Point<int> point1(2, 5);
	Point<double> point2(3.5, 6.5);
	int temp = 255;

	point1.showData();
	point2.showData();
	
	ShowData(temp);
	ShowData(point1);

	varArray<int, 7>::showNum();
	varArray<> arr;
	arr.showNum();

	arr.showData();
}


#endif // _1119
