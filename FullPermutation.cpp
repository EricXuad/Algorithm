// FullPermutation.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

using namespace std;

const int maxn = 11;
int n, p[maxn], hashTable[maxn] = { false };

void generateP(int index) {
	if (index == n + 1) {
		for (int i = 1; i <= n; i++) {
			cout << p[i];
		}
		putchar('\n');
		return;
	}
	for (int x = 1; x <= n; x++) {
		if (hashTable[x] == false) {
			p[index] = x;
			hashTable[x] = true;
			generateP(index + 1);
			hashTable[x] = false;
		}
	}
}

int main()
{
	n = 4;
	generateP(1);
	return 0;
}