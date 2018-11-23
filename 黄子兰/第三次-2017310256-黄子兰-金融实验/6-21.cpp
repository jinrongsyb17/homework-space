#include <iostream>
using namespace std;
int count(char *s)
{
	int k=0,i;
	for(i=0;s[i];i++)
		if('a'<=s[i]&&s[i]<='z'||'A'<=s[i]&&s[i]<='Z') k++;
	return k;
}
int main()
{
	char a[256];
	cin>>a;
	cout<<"count="<<count(a)<<endl;
	return 0;
}
