#include"pch.h"
#include<iostream>
#include"client.h"
using namespace std;

void main() {
	client::showServername();
	client::showClientnum();
	client::Changeservername('D');
	client c;
	c.showServername();
	c.showClientnum();
	{
		client b;
		b.showServername();
		b.showClientnum();
	}
	client::showServername();
	client::showClientnum();
}
