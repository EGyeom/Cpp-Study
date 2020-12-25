#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>

int sorted[100];

void merge(int* arr, int start, int middle, int end)
{
	int i = start;
	int j = middle + 1;
	int k = start;
	while (i <= middle && j <= end)
	{
		if (arr[i] >= arr[j])
		{
			sorted[k] = arr[j];
			j++;
		}
		else
		{
			sorted[k] = arr[i];
			i++;
		}
		k++;
	}
	if (i > middle)
	{
		for (int t = j; t <= end; t++)
		{
			sorted[k] = arr[t];
			k++;
		}
	}
	else if (j > end)
	{
		for (int t = i; t <= middle; t++)
		{
			sorted[k] = arr[t];
			k++;
		}
	}
	for (int i = start; i <= end; i++)
	{
		arr[i] = sorted[i];
	}
}

void mergeSort(int* arr, int start, int end)
{
	if (start < end)
	{
		int middle = (start + end) / 2;
		mergeSort(arr, start, middle);
		mergeSort(arr, middle + 1, end);
		merge(arr, start, middle, end);
	}

}

int main()
{
	int n;
	scanf("%d", &n);
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	mergeSort(arr, 0, n - 1);
	for (int i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);
	}
}