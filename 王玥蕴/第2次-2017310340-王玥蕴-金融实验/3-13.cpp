#include<iostream>
using namespace std;

int fib(int n)
{
	return(n>2) ? fib(n - 1) + fib(n - 2) : 1;
}
int main()
{
	int a;
	cout << "请输入一个你心中的数字：" << endl;
	cin >> a;
	cout << "结果为：" << fib(a) << endl ;
}
