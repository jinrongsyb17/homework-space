#include<iostream>
#include<cmath>
using namespace std;
int getPower(int x, int y)
{
	if (y < 0)return 0;
	else if (y == 0) return 1;
	else return (x*getPower(x,y-1));
}
double getPower(double x, int y)
{
	if (y<0)
	{
		y = -y;
		double k = 1;
		for (; y>0; y--) { k = k*x; }
		k = 1 / k;
		return k;
	}
	else if (y == 0) return x;
	else return (x*getPower(x,y-1));
}
int main()
{
	int m;
	m = getPower(2, 7);
	cout << m << endl;

	double n;
	n = getPower(3.56, 7);
	cout << n<< endl;

	return 0;
}
/*在原函数中添加下面的代码
if(y<0)
{y=-y;
double k=1;
for (; y>0; y--) { k = k*x; }
k=1/k;
return k;
}*/
