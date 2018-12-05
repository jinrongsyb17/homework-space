// ConsoleApplication14.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
template<unsigned M, unsigned N>
class Permutation {
public:
	enum { VALUE = (N%M == 0) ? M : Permutation<N%M, M>::VALUE };
};

template<unsigned N>
class Permutation<0, N>
{
public:
	enum { VALUE = -1 };

};
int main() {
	cout << Permutation<65, 91>::VALUE << endl;
	return 0;
}