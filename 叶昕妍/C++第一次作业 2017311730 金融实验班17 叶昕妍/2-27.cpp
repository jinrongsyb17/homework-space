#include<iostream>
using namespace std;

int main() {
	int mark;
	cout << "你考了多少分？（0-100）" << endl;
	cin >> mark;
	int i;
		i= mark/10;
		switch (i) {
		case 10: cout << "优" << endl; break;
		case 9: cout << "优" << endl; break;
		case 8: cout << "良" << endl; break;
		case 7: cout << "中"<< endl; break;
		default:cout << "差 "<< endl; break;
		}
		system("pause");
			return 0; }
