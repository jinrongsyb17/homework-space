#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"How many scores did you get in the exam?(0~100): ";
	cin>>n;
	cout<<"Your level is : ";
	if(n>=90&n<=100)
	cout<<"Excellent"<<endl;
	else if(n>=80&n<90)
	cout<<"Great"<<endl;
	else if(n>=60&n<80)
	cout<<"Good"<<endl;
	else if(n>=0&n<60)
	cout<<"Bad"<<endl;
	else
	cout<<"Your score is out of the range 0~100"<<endl;
	return 0;
}
