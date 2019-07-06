// HashMap.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//给出n个（三个字符的大写字母）字符串，再给出m个查询字符串，输出每个查询字符串在n个字符串中出现的字数

#include "pch.h"
#include <iostream>

using namespace std;

const int maxn = 100;
char s[maxn][5], temp[5];

int hashMap(char s[], int len);

int hashTable[26 * 26 * 26 + 10] = { 0 };

int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
		int id = hashMap(s[i], 3);
		hashTable[id]++;
	}
	for (int i = 0; i < m; i++)
	{
		cin >> temp;
		int id = hashMap(temp, 3);
		cout << hashTable[id] << endl;
	}
	return 0;
}

int hashMap(char s[], int len) {
	int id = 0;
	for (int i = 0; i < len; i++)
	{
		id = id * 26 + s[i] - 'A';
	}
	return id;
}