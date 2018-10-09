#include<iostream>
using namespace std;

class Datatype {
	enum{character,integer,floating_point}type;
	union { char c; int i; float f; };
public:Datatype(char ch) { type = character; c = ch; }
	   Datatype(int ii) { type = integer; i = ii; }
	   Datatype(float ff) { type = floating_point; f = ff; }
	   void show();
};
void Datatype::show() {
	switch (type) {
	case character:cout << "字符型：" << c << endl; break;
	case integer:cout << "整型：" << i << endl; break;
	case floating_point:cout << "浮点型：" << f << endl; break;
	}
}
int main(){
	Datatype a = 'a', b = 7, c = 11.28F;
	a.show();
	b.show();
	c.show();
	system("pause");
	return 0;
}