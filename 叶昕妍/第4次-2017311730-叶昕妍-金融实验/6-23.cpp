#include <iostream>
using namespace std;

int main() {
	int i;
	double grade[7];
	for (i = 0; i <= 7; i++) {
		cout << "Student" << i + 1 << "'s grade is ";
		cin >> grade[i];
	}
	double totalgrades=0, average;
	for (i = 0; i <= 7; i++) {
		totalgrades += grade[i];
	}
	average = totalgrades / 8;
	cout << "The average grade is " << average << endl;
	system("pause");
	return 0;
}