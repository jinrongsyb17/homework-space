#include<iostream>
using namespace std;
int main()
{
	int a;
	cout << "你考试考了多少分？（0-100）：";
	cin >> a;
	if (a > 100 || a < 0)
		cout << "请输入0-100" << endl;
	else if (90 <= a)
		cout << "优" << endl;
	else if (80 <= a)
		cout << "良" << endl;
	else if (60 <= a)
		cout << "中" << endl;
	else
		cout << "差" << endl;
	system("pause");
	return 0;
}