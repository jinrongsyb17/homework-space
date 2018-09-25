#include<iostream>
using namespace std;
int main() {
	cout << "2 3 ";
	int i = 2, j = 2;
	while (i <= 100)
	{
		j = 2;
		while (j <= i / 2) {
			{if (i%j != 0) j++;
			else break;
			}
			if (j > i / 2) cout << i << " ";
		}
		i++;
	}

}
