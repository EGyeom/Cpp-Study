#include <iostream>

int main()
{
	int arr[10] = { 0, };
	for (int i = 0; i < 10; i++)
	{
		std::cin >> arr[i];
	}

	int temp = 0;
	int index = 0;
	for (int i = 1; i < 10; i++)
	{	
		temp = arr[i];
		index = i;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] < arr[j])
			{
				temp = arr[i];
				index = j;
				for (int k = i; k > index; k--)
				{
					arr[k] = arr[k-1];
				}
				arr[index] = temp;
				break;
			}
		}

	}


	for (int i = 0; i < 10; i++)
	{
		std::cout << arr[i] << " ";
	}

}