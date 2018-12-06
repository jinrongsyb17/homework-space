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
	cout << Permutation<48, 30>::VALUE << endl;
	return 0;
}
