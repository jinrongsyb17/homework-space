#include <iostream>
using namespace std;

int fun1(int i,int j)//最大公因数
{
	int k=(i>j)?j:i;
	while(i%k!=0||j%k!=0)
	{
		k--;
	}
	return k;
}

int fun2(int i,int j)//最小公倍数
{
	int k=(i>j)?i:j;
	while(k%i!=0||k%j!=0)
	{
		k++;
	}
	return k;
}

int main ()
{
	int i,j,k,p;
	cout<<"请输入两个数"<<endl;
	cin>>i>>j;
	k=fun1(i,j);
	p=fun2(i,j);
	cout<<"最大公因数为:"<<k<<endl;
	cout<<"最小公倍数为:"<<p<<endl;

	system("pause");

}