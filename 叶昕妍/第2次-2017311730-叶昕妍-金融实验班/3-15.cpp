#include<iostream>
using namespace std;
int getpower(int x, int y) {
	if (y <= 0) return 0;
	else if (y == 0) return 1;
	else if (y == 1) return x;
	else  return(x*getpower(x, y - 1));
}
double getpower(double x, double y) {
	if (y <= 0) return 0;
	else if (y == 0) return 1;
	else if (y == 1) return x;
	else  return(x*getpower(x, y - 1));
}
int main(){
	int inumber,power1;
	double dnumber,power2;
	cout << "输入一个整型数据" << endl;
	cin >> inumber;
	cout << "输入一个实型数据" << endl;
	cin >> dnumber;
	cout << "输入您想要计算的整型数据的次方数" << endl;
	cin >> power1;
	cout << "输入您想要计算的实型数据的次方数" << endl;
	cin >> power2;
	cout << inumber << "的" << power1 << "次方是" << getpower(inumber, power1) << endl;
	cout << dnumber << "的" << power2 << "次方是" << getpower(dnumber, power2) << endl;
	system("pause");
	return 0;

}

