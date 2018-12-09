#include <iostream>
using namespace std;
template<undesigned m,undesigned n>

class permutation {
public:
	enum {
		value = permutation<m, n - 1>::value*(m - n + 1);

	};
};

template<undesigned m>
class permutation<m, 1> {
public:
	enum {
		value = m;
	};
};

int main() {
	cout << permutation<5, 2>::value << endl;
	return 0;
}