#include<iostream>
using namespace std;
template<unsigned M,unsigned N>
class Permutation{
	public:
		enum{value=Permutation<M,N-1>::value*(M-N+1)};
}; 
template<unsigned M>
class Permutation<M,1>{
	public:
		enum{value=M};
		};

int main(){
	cout<<Permutation<6,2>::value<<endl;
	return 0;
}
	
