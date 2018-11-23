// 6-26矩阵转置.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void transposition (int m, int n){
	int a[100][100];
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			cout << "请输入第" << i + 1 << "行" << "第" << j + 1 << "列元素" << endl;
			cin >> a[i][j];
		}
	}
	cout << "原矩阵为：" << endl;
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			cout << a[i][j] << "  ";
		}
		cout << endl;
	}
	cout << "转置后的矩阵为：" << endl;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cout << a[j][i] << "  ";
		}
		cout << endl;
	}
}

int main()
{
	int m, n;
	cout << "请输入矩阵的行数：" << endl;
	cin >> m;
	cout << "请输入矩阵的列数：" << endl;
	cin >> n;
	transposition(m, n);
	return 0;
}

