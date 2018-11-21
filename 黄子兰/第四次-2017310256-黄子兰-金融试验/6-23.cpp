#include <iostream>
using namespace std;
const int N = 8;
class Student{
public:
double average(){
double sum = 0;
for(int i = 0;i<N;i++)
sum += _grade[i];
return sum/N;
}
void input(void){
for(int i = 0;i<N;i++){
cout << "请输入第" << i+1 << "个同学的成绩:" << flush;
cin >> _grade[i];
}
}
private:
double _grade[N];
};
int main (void){
Student s;
s.input();
cout << "平均成绩：" << s.average() << endl;
return 0;
} 
