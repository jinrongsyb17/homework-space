#include<iostream>
using namespace std;

void transpose(int *m, int r, int c)
{
	for (int i = 0; i<c; i++)
	{
		for (int j = 0; j<r; j++)
		{
			cout << *(m + i + j*c) << " ";
		}
		cout << endl;
	}
}

int main()
{
	int row, col;
	int *mat = 0;
	cout << "请输入行数和列数:" << endl;
	cin >> row >> col;
	cout << "请输入矩阵元素" << endl;
	mat = new int[row*col];
	if (mat != 0)
	{
		for (int i = 0; i<row; i++)
		{
			
			for (int j = 0; j<col; j++)
			{
				cout <<"请输入第"<<i+1<<"行第"<< j+1<< "列元素" << endl;
				cin >> *(mat + i*col + j);
			}
		}
		transpose(mat, row, col);
		system("pause");
		delete[] mat;
	}
	else
	{
		cout << "输入错误";
	};
	return 0;
}

