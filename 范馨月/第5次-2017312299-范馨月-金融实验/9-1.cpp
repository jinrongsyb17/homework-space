#include<iostream>
using namespace std;

template<class T>
class Array {
private:
	int size;
	T* list;
public:
	Array(int sz = 50);
	T& operator[](int i);
};

template<class T>
Array<T>::Array(int sz) {
	size = sz;
	list = new T[size];
}

template<class T>
T& Array<T>::operator[] (int i) {
	return list[i];
}

int main() {
	int n;
	double total = 0;
	cout << "Please enter the number of students: ";
	cin >> n;
	Array<double> array(n);
	for (int i = 0; i < n; i++) {
		cout << "Please enter the grade of Student: " << i+1<<"     ";
		cin >> array[i];
		total += array[i];
	}
	cout << "The average grade is: " << total / n;
	
	system("pause");
	return 0;
}