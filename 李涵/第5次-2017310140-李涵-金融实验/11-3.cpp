// ConsoleApplication15.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <fstream>
using namespace std;
int main()
{
	ofstream file1("test1.txt");
	file1 << "已成功写入文件！";
	file1.close();
	return 0;
}