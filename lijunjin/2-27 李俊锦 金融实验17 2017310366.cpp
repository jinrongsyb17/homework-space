#include <iostream>
using namespace std;
int main(){
	int i;
	cout << "What is your grades£¿£¨0-100£©" << endl;
	cin >> i;
	if(i <= 100 && i >= 90) 
		cout <<"\nExcellent";
	else if(i < 90 && i >= 80)
		cout <<"\Good";
	else if(i < 80 && i>= 70)
		cout <<"\nJustSoSo";
	else if(i < 60 && i>=0)
	cout <<"\nPoor";
	return 0;
}
