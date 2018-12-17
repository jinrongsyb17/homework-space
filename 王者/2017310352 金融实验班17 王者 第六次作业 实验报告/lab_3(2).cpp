#include<iostream.h>
#include"client.h"
void main(){
	client::showServerName();//初始状态
	client::ChangeClientNum();//类名引用静态成员函数
	client::ChangeServerName('B');
	client a;//增加一个用户
	a.ShowServerName();
	a.showClientNum();
	{
		client b;
		b.ShowServerName();
		b.showClientNum();
	}//减少一个用户
	client::ShowServerName();
	client::showClientNum();
}
