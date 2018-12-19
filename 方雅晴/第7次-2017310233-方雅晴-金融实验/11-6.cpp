#include<iostream>
#include<fstream>
using namespace std;

class DOG{
	public:
		DOG(int a,double w):age(a),weight(w){}
		int get_age(){return age;}
		double get_weight(){return weight;}
	private:
		int age;
		double weight;
}; 

int main(){
	char filename[100];
	cout<<"请输入文件名："<<endl;
	cin>>filename;
	ofstream file1(filename); 
	DOG dog1(10,5);
	file1.write((char*)&dog1,sizeof dog1);
	file1.close();
	
	ifstream file2(filename);
	DOG dog2(1,1);
	cout<<"dog2 age:"<<dog2.get_age()<<"\tdog2 weight:"<<dog2.get_weight()<<endl;
	file2.read((char*)&dog2,sizeof dog2);
	cout<<"dog2 age:"<<dog2.get_age()<<"\tdog2 weight:"<<dog2.get_weight()<<endl;	
    file2.close();
    return 0;
}
