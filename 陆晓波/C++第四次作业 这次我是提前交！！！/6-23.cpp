#include <iostream> //preprocessor directives
#include <vector>
using namespace std ;
//using namespace std;
//using namespace 使用命名空间
//std : standard library 标准程序库
double average(vector<double> &arr){
double sum = 0 ;
for(int i = 0 ; i < arr.size() ; i++)
    sum += arr[i] ;
    return sum/arr.size() ;
}
int main(){
int n = 8 ;
vector <double> arr ;
cout << "请分别输入8个学生的考试成绩，我将为你算算平均数" << endl ;
for(int i = 0 ; i < n ; i++)
    cin >> arr[i] ;
cout << "好的，他们的平均分是：" << average(arr) << endl ;
}
