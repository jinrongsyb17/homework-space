#include<iostream>
using namespace std;
int main() {
	cout << "2\n";
	int key = 1;
	int i = 3;
	int j = 2;
	do {
		key = 1;
		j = 2;
		while (j < i) {
			if (i%j == 0) {
				key = 0;
				break;
			}
			j++;
		}
		if (key == 1) {
			cout << i << endl;
		}
		i++;
	} while (i <= 100);
	system("pause");
	return 0;
}

