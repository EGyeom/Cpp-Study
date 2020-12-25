#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>

int main()
{
	int n;
	scanf("%d", &n);
	int arr[10001];
	int number = 0;
	int count = 0;
	for (int i = 0; i < 10001; i++)
	{
		arr[i] = 0;
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &number);
		arr[number]++;
	}

	for (int i = 0; i < 10001; i++)
	{
		for (int j = 0; j < arr[i]; j++)
		{
			printf("%d\n", i);
		}
	}

}