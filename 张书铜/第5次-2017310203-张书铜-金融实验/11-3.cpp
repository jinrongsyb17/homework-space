// ConsoleApplication18.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <fstream>
using namespace std;
int main()
{
	ofstream file1("test1.txt");
	file1 << "已成功写入文件！";
	file1.close();
	return 0;
}