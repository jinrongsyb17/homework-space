
//#include "Homework2_27.hpp"

#include <iostream>
using namespace std;
int main(){
    int score;
    //输出问题询问分数
    cout<<"What's your score in this test?"<<endl;
    //将分数赋值给变量score
    cin>>score;
    //判断并输出分数等级
    if((score>=90)&&(score<=100)){
        cout<<"等级：优秀"<<endl;
    }
    else if((score>=80)&&(score<90)){
        cout<<"等级：良"<<endl;
    }
    else if((score>=60)&&(score<80)){
        cout<<"等级：中"<<endl;
    }
    else if((score>=0)&&(score<60)){
        cout<<"等级：差";
    }
    
    else  {cout<<"Invalid input."<<endl;
    }
    
    return 0;
}
