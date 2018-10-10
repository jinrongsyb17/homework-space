#include<iostream>
using namespace std;
int main() {
	int a, b = 2, m,n;
	while (b <= 100) {
		a = 2; n = b / 2, m = 1;
			while (a <=n) 
			{
				if (b%a == 0) {
					m = 0;
					break;
				}
		
			 a++;
			}
			if (m)
				cout << b;
		 b++;
			}
	system("pause");
	return(0);
	


}