#include<iostream>
#include"client.h"
#include<string>
using namespace std;

int main(){
    CLIENT A;
	CLIENT *P = &A;
	P->get_total();
	P->get_information();
	CLIENT B("peter","male",18,1);
	P = &B;
	P->get_total();
	P->get_information();
	system("pause");
	return 0;
   
}
