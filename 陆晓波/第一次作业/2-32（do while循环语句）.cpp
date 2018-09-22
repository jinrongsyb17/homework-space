#include <iostream> //preprocessor directives
using namespace std;
//using namespace 使用命名空间
//std : standard library 标准程序库
//2-29.cpp(do while循环语句)
int main(){
cout << "我们来玩一个猜数的游戏吧！" << endl ;
int x , n = 34 ;
cout << "我已经想好了一个整数，那现在请你开始猜吧！" << endl ;
cin >> x ;
do {
        if (x < 1 || x > 100)
            cout << "忘了告诉你，这个整数在1~100里面哦！" << endl ;
        else if (x > n)
            cout << "大了，大了！" << endl ;
        else cout << "哎！小了，小了！" << endl ;
        cin >> x ;
    }
    while (x != n) ;
    cout << "恭喜你，猜对了！给你加鸡腿！！" << endl ;
    return 0 ;
}
