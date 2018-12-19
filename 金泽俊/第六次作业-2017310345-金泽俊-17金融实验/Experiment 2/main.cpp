#include"Computer.h"
#include<iostream>
using namespace std;
int main() 
{
	computer c1;
	computer c2(6, 3.0, 2, 3, 16, 1);//复制构造函数的调用？
	computer c3(c2);//是否需要引用？

	c1.run();
	c1.show();
	c1.shutdown();

	c2.run();
	c2.show();
	c2.shutdown();

	c3.run();
	c3.show();
	c3.shutdown();

	system("pause");
	return 0;

}