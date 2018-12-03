#include<iostream>
using namespace std;
template<unsigned M,unsigned N>
class Gcd{
	public:
		enum{value=(((N%M)==0)?M:Gcd<N%M,M>::value )
		};
}; 
template<unsigned N>
class Gcd<0,N>{
	public:
		enum{value=-1};
		};

int main(){
	cout<<Gcd<12,8>::value<<endl;
	return 0;
}
	
