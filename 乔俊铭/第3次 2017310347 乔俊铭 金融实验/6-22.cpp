#include<iostream>
#include<string>
using namespace std;

void reverse(string s)
{
	static string s2;
	int size1 = s.length();
	int size2 = s2.length();
	if (size1 == size2)
	{
		cout << s2;
		return;
	}
	s2 += s.at(size1 - size2 - 1);
	reverse(s);

}
int main()
{
	string s = "abcde";
	reverse(s);
	return 0;
}