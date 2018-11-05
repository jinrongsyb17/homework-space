#include<iostream>
using namespace std;
int fbn(int n)
{	cout<<"调用fbn("<<n<<")的过程: "; 
if(n==1||n==2)
{	   cout<<"返回 1"<<endl;	
return 1;		
}
else{	  cout<<"调用fbn("<<n-1<<")和 调用fbn("<<n-2<<")"<<endl;	
return fbn(n-1)+fbn(n-2);   
}
}int main() {
	cout << "请输入一个数:";
	int n;
	cin >> n;
	cout << endl << endl;
	cout << "最后结果：f(" << n << ")等于" << fbn(n) << endl;
	return 0;
}



