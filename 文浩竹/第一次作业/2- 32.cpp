
#include<iostream>

using namespace std;

int main() {

	int num = 54;

	cout << "请输入一个1~100的数字：" << endl;

	int guessNum = 0;

	cin >> guessNum;



	while (guessNum != num) {

		cout << "请再次输入一个1~100的值：" << endl;

		cin >> guessNum;

	}

	cout << "恭喜你猜对了";

	system("pause");

	return 0;

}