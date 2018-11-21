#include <iostream>
using namespace std;
 

const int n = 8;

float avg(int *&);
int main() {
	int *student = new int[n];
	int i;
	for (i = 0; i < n; i++) {
		cout << "输入8个成绩" << endl;
		cin >> *(student + i);

	}
	cout << "平均是" << avg(student) << endl;
	delete[] student;
	system("pause");

}

float avg(int *& st) {
	int i;
	float avg = 0;
	for (i = 0; i < n; i++) {
		avg += *(st+i);
	}
	return avg / n;

}