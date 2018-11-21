//6-21
#include<string>
#include<iostream>
using namespace std;
int NumSentence(string t)
{
	static int k;
	int i=0;
	for (; i <= t.length();i++) 
	{
		if ((t[i] <= 'z') && (t[i] >= 'a'))
			k++;
		if ((t[i] <= 'Z') && (t[i] >= 'A'))
			k++;
	};
	cout << k << endl;
	return k;
}
void main()
{
	string st;
	getline(cin, st, '.');

	NumSentence(st);
	system("pause");
}