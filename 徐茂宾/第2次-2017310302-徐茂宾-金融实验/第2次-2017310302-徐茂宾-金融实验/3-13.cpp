// 3-13-递归级数（2017310302-徐茂宾-金融实验班17)

#include "pch.h"
#include <iostream>
using namespace std;

int Fibo(int n) {
	int m;
	if (n == 1||n==2 )
		m = 1;
	else
		m = Fibo(n-1)+Fibo(n-2);
    return m;
}

int main()
{
	int k;
	cout << "请输入一个大于零的整数："<<endl;
	cin >> k;
	cout << Fibo(k);
}