#include "client.h"
#include <iostream>
using namespace std;
void main() {
	CLIENT::showServername();
	CLIENT::showClientnum();
	CLIENT::changeServername('B');
	CLIENT x;
	x.showServername();
	x.showClientnum();
	{
		CLIENT y;
		y.showServername();
		y.showClientnum();
	};
	CLIENT::showServername;
	CLIENT::showClientnum;
}