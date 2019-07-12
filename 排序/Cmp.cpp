// Cmp.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

#define LEN 5

struct Student {
	char name[10];
	char id[10];
	int score;
	int rank;
}stu[LEN];

bool cmp(Student a, Student b) {
	if (a.score != b.score)
		return a.score > b.score;
	else
		return strcmp(a.name, b.name) < 0;
}

int main()
{
	for (int i = 0; i < LEN; i++)
	{
		cin >> stu[i].name >> stu[i].id >> stu[i].score;
	}
	sort(stu, stu + LEN, cmp);
	putchar('\n');
	for (int i = 0; i < LEN; i++)
	{
		cout << stu[i].name << stu[i].id << stu[i].score << endl;
	}
	return 0;
}
