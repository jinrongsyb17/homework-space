#include<iostream>
using namespace std;
class DataType{
public:
	DataType(int newInt);
	DataType(double newDouble);
	DataType(char newChar);
	
private:
	char charDate;
	int integerDate;
	double doubleDate;
};

DataType:: DataType(int newInt) {
	integerDate = newInt;
	cout << "已经构造了一个整型的对象" << integerDate << endl;
}

DataType::DataType(double newDouble) {
	doubleDate = newDouble;
	cout << "已经构造了一个浮点型的对象" << doubleDate << endl;
}

DataType::DataType(char newChar) {
	charDate = newChar;
	cout << "已经构造了一个字符型的对象" << charDate << endl;
}

int main() {
	DataType data1 = DataType(1);
	DataType data2 = DataType(2.0);
	DataType data3 = DataType('c');
	system("pause");
	return 0;
}
