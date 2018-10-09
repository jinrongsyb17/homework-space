#include<iostream>
using namespace std;

int main()
{
	int score;

	cout << "你考了多少分";
	cin >> score;
	if (score > 100 || score < 0)
		cout << "分数必须在0到100之间" << endl;
	else if (score >= 90)
		cout << "优" << endl;
	else if (score >= 80)
		cout << "良" << endl;
	else if (score >= 60)
		cout << "中" << endl;
	else
		cout << "差" << endl;
	return 0;

}