// ConsoleApplication105.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//


#include <stdio.h>
#include <stdlib.h>
#define NUM 30 
int main()
{
	int num;            
	double score_avg;   
	int i;              
	double score[NUM] = { 0 };
	printf("请输入课程A考试的总人数：\n");
	scanf("%d", &num);
	printf("\n请依次输入学生的考试成绩：\n");
	for (i = 0; i < num; i++)
	{
		printf("\n请输入第%d个学生的考试成绩：\n", i + 1);
		scanf("%lf", &score[i]);
	}
	for (i = 0; i < num; i++)
	{
		score_avg += score[i];
	}
	score_avg /= num;
	printf("课程A中学生的平均成绩为：%.2lf", score_avg);
	return 0;
}
	//计算num个学生的平均成绩
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
