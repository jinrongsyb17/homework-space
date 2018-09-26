//等级显示.cpp
#include<iostream>
 using namespace std;
 int main(){
 cout<<"你考试考了少分？（0-100）"<<endl;
 int grade;
 cin >>grade;
	if(grade>=0&&grade<60)
		 cout<<"差"<<endl;
	else if(grade>=60&&grade<80)
		 cout<<"中"<<endl;
	else if(grade>=80&&grade<90)		
		 cout<<"良"<<endl;
	else if(grade>=90&&grade<=100)	
		 cout<<"优"<<endl;
	else	
		 cout<<"请输入正确的分数"<<endl;
			
	system("pause");
	return 0;
 
 }
