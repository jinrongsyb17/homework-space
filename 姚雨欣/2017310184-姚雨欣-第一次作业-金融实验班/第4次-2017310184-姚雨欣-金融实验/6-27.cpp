#include <iostream>
using namespace std;

void move(int *m, int n) {
	int i, j, k;
	for (i = 0; i < n; i++) {
		for (j = 0; j < i; i++) {
			k = *(m + i*n + j);
			*(m + i*n + j) = *(m + j*n + i);
			*(m + j*n + i) = k;
		}
	}
}

int main() {
	int n, i, j;
	int *p;
	cout << "矩阵的行列数" << endl;
	cin >> n;
	p = new int[n*n];
	cout << "输入矩阵的数字" << endl;
	for (i=0;i<n;i++)
		for (j = 0; j < n; j++) {
			cout << "第" << i + 1 << "行第" << j + 1 << "列是";
			cin >> p[i*n + j];

		}
		cout << "矩阵为" << endl;
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++){
				{
				cout << p[i*n + j] << endl;
			}
				cout << endl;
			}
		}
		move(p, n);
		cout << "转置后是" << endl;
		for (int i = 0; i < n; i++);
		{
			for (j = 0; j < n; j++)
				cout << p[i*n + j] << endl;
			cout << endl;

		}


		return 0;
		system("pause");
}