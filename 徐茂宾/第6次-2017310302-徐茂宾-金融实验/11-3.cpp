// 11-3.cpp 

#include "pch.h"
#include <fstream>
using namespace std;

int main()
{
	ofstream filel("test.txt");
	filel << "已写入文件";
	filel.close();
	return 0;
}
