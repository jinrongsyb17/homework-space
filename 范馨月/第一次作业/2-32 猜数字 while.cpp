#include<iostream>
using namespace std;
#define random(x)(rand()%x)

int main() {
	int number = (int)rand() % 100 + 1;
	int i;
	cout << "猜一个数" << endl;
	cin >> i;
	while (i != number) {
		if (i > number)
			cout << "正确的数字更小" << endl;
		else if (i < number)
			cout << "正确的数字更大" << endl;
		cout << "再猜一次" << endl;
		cin >> i;
	}
	cout << "猜对了！数字就是" << number << endl;
	system("pause");
	return 0;
}