#include<iostream.h>

class Counter{

public:
	Counter(){n=0;}
	Counter(int i){n=i;}
	Counter operator + (Counter c){
		Counter temp;
		temp.n=n+c.n;
		return temp;
	}
	void disp(){cout<<n<<endl;}
private:
	int n;
};
int main(){
	Counter c1(5),c2(10),c3;
	c3=c1+c2;
	c1.disp();
	c2.disp();
	c3.disp();
	return 0;
}

