#ifndef client_h
#define client_h
#include<iostream>
#include<string> 
using namespace std; 

class CLIENT{
	public:
		CLIENT();
		CLIENT(string n,string s,int a,bool v);
		void get_information();
		string get_vip();
		void get_total();
		~CLIENT();
	private:
		string name;
		string sex;
		int age;
		bool vip;
		static int total;
};
#endif 
