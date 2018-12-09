#include<iostream>
using namespace std;

int main() {
	const int num = 10;
	float averScore, totalScore = 0.0;
	int score[num];
	for (int ii = 0; ii < num; ++ii) {
		cout << "Input [" << ii + 1
			<< "]" << endl;
		cin >> score[ii];
		totalScore += score[ii];
	}
	averScore = totalScore / num;
	cout << averScore << endl;
	return 0;
}