#include <iostream> //preprocessor directives
#include <string>
#include <typeinfo>
using namespace std;
//using namespace 使用命名空间
//std : standard library 标准程序库
class DataType{
public:
    DataType(char a) ;
    DataType(int b) ;
    DataType(float c) ;
    };
union unknown{
    char d ;
    int e ;
    float f ;};
    DataType::DataType(char a){
    cout << "它是一个字符" << endl ;}
    DataType::DataType(int b){
    cout << "它是一个整数" << endl ;}
    DataType::DataType(float c){
    cout << "它是一个浮点数" << endl;}
    int main(){
    string x ;
    unknown x0 ;
    cout << "请输入一个数，我可以告诉你它是什么类型的哦！！" << endl ;
    cin >> x ;
    x0 = static_cast<unknown>(x) ;
    DataType(x0) ;
    return 0 ;
    }
