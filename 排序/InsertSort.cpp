// InsertSort.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

using namespace std;

#define LEN 10

void insertSort(int *a);

int main()
{
	int a[LEN] = { 1,5,2,9,8,7,6,3,4,0 };
	insertSort(a);
	return 0;
}

void insertSort(int *a)
{
	for (int i = 1; i < LEN; i++)
	{
		int temp = a[i], j = i;
		while (j > 0 && a[j - 1] < temp)
		{
			a[j] = a[j - 1];
			j--;
		}
		a[j] = temp;
	}
	for (int i = 0; i < LEN - 1; i++)
	{
		cout << a[i] << " ";
	}
	cout << a[LEN - 1] << endl;
}