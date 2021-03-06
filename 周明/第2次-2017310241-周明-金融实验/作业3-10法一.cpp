// ConsoleApplication2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;
int min(int x, int y) {
	if (x < y)return x;
	else return y;
}
 
int zdgys(int x, int y) {//穷举法找到两个数的最大公因数，注意最后的返回变量一定提前声明；注意满足条件时要及时跳出；
	int c;
	for (c = min(x, y); ; c--) {
		if (x%c == 0 && y%c == 0)break;
	}; return c;
}
	int zxgbs(int x, int y) {
		int a = zdgys(x, y);
		int b = x / a;
		int c = y / a;
		return a * b*c;
	}

	int main() {
		int x; int y;
		cout << "请输入您要判断的两个数字：";
		cin >> x ;
		cin >> y ;
		cout << x << "与" << y << "的最大公因数是" << zdgys(x, y) << endl;
		cout << x << "与" << y << "的最小公倍数是" << zxgbs(x, y);
	}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
