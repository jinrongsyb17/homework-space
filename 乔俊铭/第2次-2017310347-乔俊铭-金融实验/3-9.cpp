#include<iostream>
using namespace std;
int number(int n) {
	int i;
	for (i = 2; i <= n / 2; i++)
	{
		if (n%i == 0) break;
		else;
	}
	if (i == (n / 2 + 1)) return 1;
	else return 0;
}

int main(){
	int a;
	cin >> a;
	if (number(a) == 1) cout << "right";
	else cout << "wrong";

}
