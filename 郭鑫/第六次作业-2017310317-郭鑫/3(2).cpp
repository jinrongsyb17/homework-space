#include "pch.h"
##include <string.h>
using namespace std;

class CLIENT {
private:
	static char SERVERNAME;
	static int CLIENTNUM;
public:
	CLIENT() {};
	~CLIENT() {};
	static int GETCLIENTNUM();
	static void CHANGESERVERNAME(char name) {};
	static char GETSERVERNAME();
};
CLIENT::CLIENT() {
	CLIENTNUM--;
}
int CLIENT::GETCLIENTNUM() {
	return CLIENTNUM;
}
void CLIENT::CHANGESERVERNAME(char name) {
	SEVERNAME = name;
}
char CLIENT::GETSERVERNAME() {
	return SERVERNAME;
}
#include <iostream.h>
int CLIENT::CLIENTNUM = 0;
char CLIENT::SERVERNAME = 'A';
int main() {
	CLIENT a;
	CLIENT b;
	cout << "服务器名称为：" << CLIENT::GETSERVERNAME() << endl;
	CLIENT::CHANGESERVERNAME('G');
	cout << "客户机数量为：" << CLIENT::GETCLIENTNUM() << endl;
	cout << "服务器名称为：" << CLIENT::GETSERVERNAME() << endl;
}