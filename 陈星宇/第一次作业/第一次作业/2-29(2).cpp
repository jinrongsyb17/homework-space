# include <iostream>
# include <cmath>
using namespace std;

int main() {
	int i = 2, j;
	bool k = true;
	do {
		j = 2;
		do {
			if (i % j == 0) {
				k = false;
				break;
			}
			j++;
		} while (j <= sqrt(i));
		if (k)
			cout << i << ¡°ÊÇÖÊÊý¡± << endl;
		i++;
	} while (i <= 100);
	return 0;
}