#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int i, j, k, flag;
	i = 2;
	do {
		flag = 1;
		k = sqrt(i);
		j = 2;
		do {
			if (i%j == 0)
			{
				flag = 0;
				break;
			}
			j++;
		} while (j <= k);
		if (flag)
			cout << i << "ÊÇÖÊÊý" << endl;
		i++;
	} while (i <= 100);
	system("pause");

	return 0;

}
