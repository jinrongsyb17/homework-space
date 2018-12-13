#include<iostream>
#include<vector>
using namespace std;
int main() 
{
	int n;
	
	cout << "How many scores do you want to calculate?" << endl;
	cin >> n;
	vector<int>a(n);

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}int sum = 0;
	for (int i = 0; i < n; i++) 
	{
		sum += a[i];
	}
	double avg = sum / static_cast<double>(n);
	cout << avg;
	system("pause");

	return 0;
}