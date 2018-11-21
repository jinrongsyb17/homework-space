#include<iostream>

using namespace std;

void output(double *ptr,int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << ptr[i*n + j] << " ";
		}
		cout << endl;
	}
}

int main() {
	int n;
	cout << "请输入矩阵的行、列数：  ";
	cin >> n;
	double *matrix = new double[n*n];
	 
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "第" << i+1 << "行第" << j+1 << "列的数字为： ";
			cin >> matrix[i*n + j];
		}
	}

	cout << "你输入的原矩阵为：" << endl;
	output(matrix, n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			double a = matrix[i*n + j];
			matrix[i*n + j] = matrix[j*n + i];
			matrix[j*n + i] = a;
		}
	}

	cout << "转置之后的矩阵为： " << endl;
	output(matrix, n);
    
	delete[] matrix;
	system("pause");
	return 0;
}