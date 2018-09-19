#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (i == 0 && j == 0)
				cout << setw(4) << " " << setw(4);
			else if (i != 0 && j == 0)
				cout << setw(4) << i << setw(4);
			else if (i == 0 && j != 0) {
				cout << setw(4) << j << setw(4);
			}
			else
				cout << setw(4) << i * j << setw(4);
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
