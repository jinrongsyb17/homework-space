#include <iostream>
using namespace std;

template<unsigned M, unsigned N>
class Gcd {
public:
	enum { VALUE = (N%M == 0) ? M : Gcd<N%M, M>::VALUE };
};

template<unsigned N>
class Gcd<0, N> {
public:
	enum { VALUE = -1 };
};

int main() {
	cout << Gcd<15,25>::VALUE << endl;
	system("pause");
	return 0;
}