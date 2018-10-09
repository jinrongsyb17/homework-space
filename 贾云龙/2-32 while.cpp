#include<iostream>
using namespace std;
int main() {
	int b = 22;
	int n = 0;
	while (n != b)

	{
		cout << "Please guess what this number is(0~100)";
		cin >> n;
		if (n > b)
			cout << "The number you guessed is bigger than that one given" << endl;
		else if (n<b)
			cout << "The number you guessed is smaller than that one given" << endl;
		else
			cout << "you are right" << endl;
	}
	system("pause");
	return 0;
}
