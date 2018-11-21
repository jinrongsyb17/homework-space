#include<iostream>
#include<string>
using namespace std;

int count(string str)
{
	int i, num = 0;
	for (i = 0; str[i] != '.'; i++)
	{
		if ((str[i] >= 'a'&&str[i] <= 'z' || str[i] >= 'A'&&str[i] <= 'Z'))
			num++;
	}
	return num;
}
int main()
{
	string sest;

	cout << "请输入一个英文句子" << endl;
	getline(cin, sest, '.');
	
	
	int i = sest.length();
	cout << "这个句子中有" << i << "个英文字母" << endl;
	return 0;

}