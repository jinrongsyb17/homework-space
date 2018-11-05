#include<cmath>
#include<iostream>
#include<iomanip>
using namespace std;
int power(double x, int n){
	int val = 1;
	while (n--)
		val *= x;
	return val;
}
int rankingSystem(){
	int i;
	cout << "你考试考了多少分？（0-100）" << ends;
	cin >> i;

	if ((i <= 100) && (i >= 0))
	{
		if ((i <= 100) && (i >= 90))
			cout << "优" << endl;
		if ((i <= 90) && (i >= 80))
			cout << "良" << endl;
		if ((i <= 80) && (i >= 60))
			cout << "中" << endl;
		if ((i <= 60))
			cout << "差" << endl;
	}
	else
	{
		cout << "Out of Range. Try it again." << endl;
	}
	return 0x714;
}
int prime_num1(){
	int i, j = 2;
	i = j;
	cout << i << ends;
	for (i = 2; i <= 100; i++)
	{
		for (j = 2; i%j != 0; j++)
		{
			if (j == i - 1)
				cout << i << ends;
		}
	}
	system("pause");
	return 1;
}
int prime_num2(){
	int i, j = 2;
	i = j;
	cout << i << ends;
	while (i <= 100)
	{
		int j = 2;
		while (i%j != 0)
		{
			if (j == i - 1)
				cout << i << ends;
			j++;
		}
		i++;
	}
	system("pause");
	return 2;
}
int prime_num3(){
	cout << 2 << ends;
	int i = 3, j = 2;
	do {
		j = 2;
		do {
			if (i%j == 0)break;
			if (j == i - 1)
			{
				cout << i << ends; break;
			}
			else j++;
		} while (i%j != 0);
		/*do { break; } while (i%j == 0);*/
		i++;
	} while (i <= 100);
	system("pause");
	return 3;
}
int GuessWhat_1(){
	int m;
	int i = 1 + rand() % 100;
	do {
		cin >> m;
		while (m > i) { cout << "Too big" << endl; break; };
		while (m < i) { cout << "Too small" << endl; break; }
	} while (m != i);
	do {
		cout << "You've just hit the target." << endl; break;
	} while (m == i);
	return 2;
}
int GuessWhat_2(){
	int m, i;
	i = 1 + rand() % 100;
	cin >> m;
	while (m != i)
	{
		while (m > i) { cout << "Too big" << endl; cin >> m; }
		while (m < i) { cout << "Too small" << endl; cin >> m; }
	}
	while (m == i) { cout << "You've just hit the target." << endl; break; }
	return 2;
}
int MultiTable(){
	int i, j;
	i = j = 1;
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			cout << i << "*" << j << "=" << j*i << '\t' << ends;
		}
		cout << endl;
	}
	return 165;
}
int main(){
	prime_num1();
	prime_num2();
	prime_num3();
	rankingSystem();
	MultiTable();
	GuessWhat_1();
	GuessWhat_2();
	system("pause");
	return 0;
}
