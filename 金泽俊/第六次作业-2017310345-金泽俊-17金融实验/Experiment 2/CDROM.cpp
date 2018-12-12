#include<iostream>
#include"CDROM.h"
using namespace std;
CDROM::CDROM() {
	var = 0;
}
CDROM::CDROM(int i) {
	var = i;
}
void CDROM::show() {
	cout << var << endl;
}