
//函数实现的文件包含
#include"Client.h"
using namespace std;
int main ()
{client c1(8);
client c2(21);
client c3=c1+c2;

c1++;

client* p[3] = { &c1,&c2, &c3 };
cout << "The answer should be" << endl;
cout<<9 << " " << 21 << " " << 29 << endl;

for (int i=0; i < 3; i++)
{
	p[i]->show();
}

system("pause");
return 0;
} 
