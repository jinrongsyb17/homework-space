#include <iostream>
using namespace std;

int main() {
	int n,i, j;
	int *p;
	cout << "请输入矩阵的行数和列数：" << endl;
	cin >> n;
	p = new int[n*n];
	cout << "请输入矩阵的元素：" << endl;
	for (i = 0; i <= n - 1; i++) 
		for (j = 0; j <= n - 1; j++) {
			cout << "第" << i + 1 << "行第" << j + 1 << "列元素是：";
		cin >> p[i*n+j];
			}
	cout << "矩阵为:" << endl;
	for (i = 0; i <= n - 1; i++) {
		for (j = 0; j <= n - 1; j++)
			cout << p[i*n + j] <<" ";
		cout << endl;}

	int m;
	for (i = 0; i <= n - 1; i++) 
		for (j = 0; j <= n - 1; j++) {
			m = p[i*n + j];
			p[i*n + j] = p[j*n + i];
			p[j*n + i] = m;
		}
	cout << "转置矩阵为：" << endl;
	for (i = 0; i <= n - 1; i++) {
		for (j = 0; j <= n - 1; j++)
			cout << p[j*n + i] << " ";
		cout << endl;
	}
	delete[]p;
	system("pause");
	return 0;
}