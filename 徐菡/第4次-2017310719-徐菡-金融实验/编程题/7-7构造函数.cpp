// 7-7构造函数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class base{
public:
	base(int i):m(i){
		cout << "constructing base " <<i<< endl;
	};
	~base(){};
private:
	int m;
};

class derived :public base{
public:
	derived(int a, int b) :base(a), n(b){
		cout << "constructing derived " << b << endl;
	}
private:
	int n;
};

int main()
{
	derived(2, 5);
	return 0;
}

