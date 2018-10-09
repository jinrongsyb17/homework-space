#include<iostream>
using namespace std;

class DataType {
public:
	DataType(char ch) {
		character = ch;
	}
	DataType(int number) {
		number1 = number;
	}
	DataType(double number) {
		number2 = number;
	}
private:
	char character;
	int number1;
	double number2;
};

int main(){
	DataType a('a');
	DataType b(10);
	DataType c(2.5);
	return 0;
}