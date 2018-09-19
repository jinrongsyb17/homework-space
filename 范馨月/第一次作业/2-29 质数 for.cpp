#include<iostream>
using namespace std;
int main() {
	cout << "2\n";
	int key = 1;
	for (int i = 3; i <= 100; i++) {
		key = 1;
		for (int j = 2; j < i; j++) {
			if (i%j == 0) {
				key = 0;
				break;
			}
		}
		if (key == 1)
			cout << i << " " << endl;
	}
	system("pause");
	return 0;
}

