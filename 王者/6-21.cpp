#include <iostream.h>
#include <string.h>
void reverse(char *s, char *t){
      char c;
      if (s < t){
           c = *s;
           *s = *t;
           *t = c;
           reverse(++s, --t);
	  }
}
void reverse( char *s){
     reverse(s, s + strlen(s) - 1);
}

void main(){
     char str1[20];
     cout << "输入一个字符串：";
     cin >> str1;
     cout << "原字符串为：" << str1 << endl;
     reverse(str1);
     cout << "倒序反转后为：" << str1 << endl;
}