#include"pch.h"
#include<iostream>
using namespace std;

int main() {
	int i = 2, j;
	cout << "输出100以内的质数" << endl;
	while (i <= 100) {
		for (j = 2; j < i; j++) {
			if (i%j == 0)
				break;
		}
		if (i == j)
			cout << " " << i;
		i++;
	}
}