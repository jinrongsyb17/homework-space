#include <iostream>
using namespace std;

class mammal {
public:
	mammal() {
		cout << "现在在调用mammal的构造函数" << endl;
	}
	virtual~mammal() {
		cout << "现在调用了mammal的析构函数" << endl;
	}
	virtual void speak()const {
		cout << "mammai speak" << endl;
	}
};

class dog :public mammal {
public:
	dog() {
		cout << "现在调用dog的构造函数" << endl;
	}
		~dog() {
			cout << "现在调用dog的析构函数" << endl;
	}
		void speak() const{
			cout << "dog speak" << endl;
		}
};

int main() {
	mammal *p = new dog;
	p->speak();
	delete p;
	return 0;
	system("pause");
}