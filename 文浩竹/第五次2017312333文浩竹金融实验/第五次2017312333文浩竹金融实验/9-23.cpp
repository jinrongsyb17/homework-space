#include<iostream>
using namespace std;

template<unsigned M,unsigned N>
struct Permutation {
	enum{VALUE=M*Permutation<M-1,N>/(M-N)* Permutation<M,M -N- 1>::VALUE};
};

template<>
struct  Permutation<0,0> {
	enum{VALUE=1};
};

int main() {
	const int M = 6;
	const int N = 5;
	int array[Permutation<M, N>::VALUE];
	system("pause");
	return 0;
}