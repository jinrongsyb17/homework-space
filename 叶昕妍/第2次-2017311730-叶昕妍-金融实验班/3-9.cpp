#include<iostream>
using namespace std;

int prime(int i) {

	int m, n,a;
	a=1;
	n = i / 2;
	for (m = 2; m <= n; m++) {
		if (i%m == 0) { a = 0; break; }
	}if (a);

		return a;
	}


int main() {
	int i;
		cout<<"请输入一个正整数 "<<endl;
		cin>>i;
		if (prime(i)) 
			cout<<"该数是质数"<<endl;
		else cout<<"该数不是质数"<<endl;
		system("pause");
		return 0;
		


}