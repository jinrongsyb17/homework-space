#include <iostream>
using namespace std;

void zhuanzhi(int *,int r,int c);

int main()
{
int row,col;
int *mat=0;
cout<<"请输入行列:\n";
cin>>row>>col;
mat = new int[row*col];
if (mat != 0)
{
for (int i=0;i<row;i++)
{
for (int j=0;j<col;j++)
{
cin>>*(mat+i*col+j);
}
}
zhuanzhi(mat ,row,col);
system("pause");
delete[] mat;
}
else
{
cout<<"内存不足\n";
}
}

void zhuanzhi(int *m, int r,int c)
{
for (int i=0;i<c;i++)
{
for (int j=0;j<r;j++)
{
cout<<*(m+i+j*c)<<" ";
}
cout<<endl;
} 
} 
