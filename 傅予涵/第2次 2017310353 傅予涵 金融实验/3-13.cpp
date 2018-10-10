# include <iostream>
using namespace std;
inline double fib(double n);
int main()
{
double n;
cout << " Please input a number:" << endl;
cin >> n;
n = int(n);
if (n>0)
 cout << "the class of Fib onacci is: " << "fib (" << n<< ") = " << fib (n) << endl;
else cout << "you have put a wrong number: " << n << endl;
}
inline double fib(double n)
{
if(n>2) return fib(n - 1) + fib(n - 2);
 else if (n = 2) return 1;
 else if (n = 1) return 1;
}


