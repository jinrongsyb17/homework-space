#include<iostream>
#include<string>
using namespace std;

int main() {
	double grades[8];
	double total=0;
	
	
	for (int i = 0; i < 8; i++) {
		cout << "Please enter grades of student No." << i+1;
		cin >> grades[i];
		total += grades[i];
	}

	cout << "The average grade is " << total / 8;
	system("pause");
	return 0;


	

}