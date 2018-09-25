#include<iostream>
using namespace std;
int main() {
	int j;
	for (int i = 2; i <= 100; i++)
	{
		for (j = 2; j <= i / 2; j++)
		{
			if (i%j == 0) break;
		}
		if (j > i / 2)
			cout << i << " ";
	}
	cout << endl;
}
