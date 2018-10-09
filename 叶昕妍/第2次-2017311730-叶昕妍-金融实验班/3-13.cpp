#include<iostream>
using namespace std;

int Fibonacci(int i) {
	if (i <= 2) { return (1); }
else{ return(Fibonacci(i - 1) + Fibonacci(i - 2)); }
	
}
int main() {
	int i;
	cout << "请输入一个正整数" << endl;
	cin >> i;
    cout << "它的Fibonacci级数是" << Fibonacci(i) << endl;
	system("pause");
	return 0;
		
}