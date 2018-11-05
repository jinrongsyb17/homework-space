# include <iostream>
# include <cmath>
using namespace std;

int main() {
	int i = 2, j;
	bool k = true;
	while (i <= 100) {
		j = 2;
		while (j <= sqrt(i)) {
			if (i % j == 0) {
				k = false;
				break;
			}
			j++;
		}
		if (k)
			cout << i << ¡°ÊÇÖÊÊý¡± << endl;
		i++;
	}
	return 0;
}