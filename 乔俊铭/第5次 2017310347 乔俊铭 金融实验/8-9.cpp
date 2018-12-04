#include<iostream>
using namespace std;
class baseclass {
public:
	virtual ~baseclass() {
		cout << "baseclass destructor" << endl;
	}
};
class derivedclass :public baseclass{
public:
	~derivedclass() {
		cout << "derivedclass destructor" << endl;
	};

};
void fn(baseclass *ptr) {
	delete ptr;
};
int main() {
	baseclass *b = new derivedclass();
	fn(b);
	system("pause");
	return 0;
}