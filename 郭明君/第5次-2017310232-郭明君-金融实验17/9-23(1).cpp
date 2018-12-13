// 9-23(1).cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

template<unsigned M, unsigned N>
class Permutation {
public:
	enum { VALUE = Permutation<M, N - 1>::VALUE*(M - N + 1) };
};
template<unsigned M>
class Permutation<M, 1>
{
public:
	enum { VALUE = M };

};
int main() {
	cout << Permutation<50, 30>::VALUE << endl;
	return 0;
}