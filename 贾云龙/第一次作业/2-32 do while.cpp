#include<iostream>
using namespace std;
int main() {
	int b = 22;
	int n = 0;
do

	{
		cout << "Please guess what this number is(0~100)";
		cin >> n;
		if (n > b)
			cout << "The number you guessed is bigger than that one given" << endl;
		else if (n<b)
			cout << "The number you guessed is smaller than that one given" << endl;
		else
			cout << "you are right" << endl;
	} while (n != b)
	system("pause");
	return 0;
}
