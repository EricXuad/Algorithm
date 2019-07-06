// A1025Ranking.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

struct Student {
	char id[15];
	int score;
	int location_num;		//考场号
	int local_rank;		    //本考场排名
}stu[30010];

bool cmp(Student a, Student b) {
	if (a.score != b.score)
		return a.score > b.score;
	else
		return strcmp(a.id, b.id) < 0;
}

int main()
{
	int num = 0, k, n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> k;
		for (int j = 0; j < k; j++) {
			cin >> stu[num].id >> stu[num].score;
			stu[num].location_num = i;
			num++;
		}
		sort(stu + num - k, stu + num, cmp);
		stu[num - k].local_rank = 1;
		for (int j = num - k+1; j < num; j++) {
			if (stu[j].score == stu[j - 1].score)
				stu[j].local_rank = stu[j - 1].local_rank;
			else
				stu[j].local_rank = j - (num - k) + 1;
		}
	}
	cout << num << endl;
	sort(stu, stu + num, cmp);
	int r = 1;
	for (int i = 0; i < num; i++) {
		if (i > 0 && stu[i].score != stu[i - 1].score) {
			r = i + 1;
		}
		cout << stu[i].id << " " << r << " " << stu[i].location_num << " " << stu[i].local_rank << endl;
	}
	return 0;
}
