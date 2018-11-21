#include<iostream>
using namespace std;
void move(int*a, int n)
{
	int  k,i,j=0;
	for (i= 0; j < n; j++) {
		k = *(a + i*n + j);
		*(a + i*n + j) = *(a + j*n + i);
		*(a + j*n + i) = k;
	}
}
int main() {
	int i, n, j;
	int*p;
	cout << "请输入矩阵的行、列数目：";
		cin >> n;
	p = new int[n*n];
	cout << "输入矩阵的元素" << endl;
	for (i = 0; i<n; i++)
		for (j = 0; j<n; j++) {
			cout << "第" << i + 1 << "行第" << j + 1 << "个元素为：";
			cin >> p[i*n + j];
		}
	cout << "输入的矩阵为：" << endl;
	for (i = 0; i<n; i++) {
		for (j = 0; j<n; j++)
			cout << p[i*n + j] << " ";
		cout << endl;
	}
	return 0;
}
