#include <iostream>
using namespace std;

int getPower(int x, int y)
{
	if (y < 0)
	{
		return 0;
	}
	else if (0 == y)
	{
		return 1;
	}

	return  x * getPower(x, y - 1);
}

double getPower(double x, int y)
{
	if (0 == y)
	{
		return 1.0;
	}

	return  x * getPower(x, y - 1);
}


int main()
{
	int a, m;
	double b;
	cout << "Please enter three intergers:" << endl;
	cin >> a>>b>> m;
	cout <<"a^m="<< getPower(a, m) << endl;
	cout <<"b^m="<< getPower(b, m) << endl;
	return 0;
}
