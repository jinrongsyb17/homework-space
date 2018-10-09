# include < iostream>
# include < cmath>
using namespace std;

int main() {
	int i, j;
	bool k = true;
	for (i = 2; i <= 100; i++) {
		for (j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				k = false;
				break;
			}
		}
		if (k)
			cout << i << ¡°ÊÇÖÊÊý¡± << endl;
	}
	return 0;
}