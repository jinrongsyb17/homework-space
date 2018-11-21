#include<iostream>
#include<vector>
using namespace std;
void swap(int &a, int &b)
{
	int t;
	t = a;
	b = a;
	b = t;
}
int main() {
	//row=3, column=2
	int row=0, column=0;
	cout << "What is your matrix's size?" << endl;
	cin >> row >> column;

	vector<vector<int> > vec(row, vector<int>(column));
	for (int i = 0; i < column; i++)
	{
		for (int j = 0; j < row; i++)
		{
			cout << "(" << i + 1 << "," << j + 1 << ")" << ends;
			cin >> vec[i][j];
		}
	}
	for (int i = 0; i < column; i++)
	{
		for (int j = 0; j < i; j++)
		{
			swap(vec[i][j] , vec[j][i]);

		}
	}
	for (int i = 0; i < column; i++)
	{
		for (int j = 0; j <row; j++)
		{
			cout << vec[i][j] << ends;
		}
		cout << endl;
	}
}
