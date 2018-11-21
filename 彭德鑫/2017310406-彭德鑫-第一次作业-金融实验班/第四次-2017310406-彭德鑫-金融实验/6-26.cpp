#include <iostream>
#include<stdio.h>
using namespace std;
void covatrix(int *x,int *y,int n,int k);
int main(){
int n,k;
int *x;
int *y;
int i,j;
printf("输入矩阵行数\n");
scanf("%d",&n);
printf("输入矩阵列数：\n");
scanf("%d",&k);
printf("请输入矩阵元素\n");
x=new int[n*k];//申请内存
y= new int[n*k];
for(i=0;i<n;i++)
for(j=0;j<k;j++)
{scanf("%d",&x[i*k+j]);
}
covatrix(x,y,n,k);
for(i=0;i<k;i++)
{ for(j=0;j<n;j++)
{printf("%d ",y[i*n+j]);
}printf("\n");}
cin.get();
return 0;
}
void covatrix(int *x,int *y,int n,int k)
{
int i,j;
for(i=0;i<k;i++)
for(j=0;j<n;j++)
{y[j*k+i]=x[i*n+j];}
}
