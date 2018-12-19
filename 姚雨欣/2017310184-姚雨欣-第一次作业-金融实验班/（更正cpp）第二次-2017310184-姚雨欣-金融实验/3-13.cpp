#include <iostream>
using namespace std;
int fib(int n);
int main() {
	int answer, n;
	cout << "enter number" ;
	cin >> n;
	cout << "\n\n";
	answer = fib(n);
	cout << answer << "is the" << n << "the fibonacci number\n";
	system("pause");
	return 0;

}

int fib(int n) {
	cout << "processing fib(" << n << ")... ";
	if (n < 3) {
		cout << "return 1!\n";
		return (1);
	}
	else {
		cout << "call fib(" << n - 2 << ")and fib("<<n-1<<").\n";
		return(fib(n - 2) + fib(n - 1));

	}
}