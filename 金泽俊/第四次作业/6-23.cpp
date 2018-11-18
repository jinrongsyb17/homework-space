//6-23
#include<iostream>
#include<vector>
using namespace std;

int main() 
{
	int n;
	cout << "How many students'scores would you like to take into consideration?" << endl;
	cin >> n;

	vector<int>grade(n);
	static double sum;
	for (int i = 0; i < n; i++)
	{
		cin >> grade[i];
		sum += grade[i];
	}
	double avg = sum / n;
	cout << "Their average score is " << avg << endl;

	system("pause");
	return 0;
}