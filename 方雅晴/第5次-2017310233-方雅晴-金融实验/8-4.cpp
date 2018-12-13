 # include<iostream>
 using namespace std;
 
 class counter{
 	public:
	 counter(){	 }
	counter(unsigned short num):number(num){
	}
	~counter(){ }
	counter operator +(const counter &opd2){
		return counter(number+opd2.number);
	}
	void display() const{
	cout<<number<<endl;
	}
	private:
		unsigned short number;
     }; 
     
int main(){
	counter c1(1),c2(2),c3;
	c3=c1+c2;
	cout<<"c1=";c1.display();
	cout<<"c2=";c2.display();
	cout<<"c1+c2=";c3.display();
	return 0;
}
