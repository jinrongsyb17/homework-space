#include<iostream>;
#include<string>;
using namespace std;

void reverse(string &s) {
	static string s2;   
	int Size1 = s.length(), Size2 = s2.length();    
	if (Size1 == Size2) {
		s = s2;       
		return; 
	}    
	s2+=s.at(Size1-Size2-1);    
	reverse(s);
}
	
			

int main() {
	string str;
	cout << "输入一个字符串:";
	cin >> str;
	cout << "原来为：" << str << endl;
	reverse(str);
	cout << "现在为:" << str << endl;
	system("pause");
	return 0;
}

