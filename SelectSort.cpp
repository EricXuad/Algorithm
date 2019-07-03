// SelectSort.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

using namespace std;

#define LEN 10

void selectSort(int *a);

int main()
{
	int a[LEN] = { 1,3,5,6,4,2,9,7,8,0 };
	selectSort(a);
	return 0;
}

void selectSort(int *a)
{
	for (int i = 0; i < LEN - 1; i++)
	{
		int k = i;
		for (int j = i + 1; j < LEN; j++)
		{
			if (a[k] < a[j])
				k = j;
		}
		int temp = a[k];
		a[k] = a[i];
		a[i] = temp;
	}
	for (int i = 0; i < LEN - 1; i++)
	{
		cout << a[i] << " ";
	}
	cout << a[LEN - 1];
}