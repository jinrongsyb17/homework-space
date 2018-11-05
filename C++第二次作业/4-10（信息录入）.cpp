#include <iostream> //preprocessor directives
#include <string>
using namespace std;
//using namespace 使用命名空间
//std : standard library 标准程序库
class DATE{
public:
    DATE(int x) ;
    DATE(const DATE &q) ;
    DATE () ;
    void set1(int y) ;
    int get() ;
private:
    int date ;
    };
    DATE::DATE(int x){
    date = x ;}
    DATE::DATE(const DATE &q){
    date = q.date ;}
    void DATE::set1(int y){
    date = y ;}
    int DATE::get(){
    return date ;}
    DATE::DATE():DATE(0){}
class STAFF{
public:
    STAFF(int a , char b , int c , string d) ;
    STAFF (const STAFF &p) ;
    void inputInformation(int a , char b , int c , string d);
    void outputInformation();
    ~STAFF(){}
private:
    int serial_number , gender ;
    string ID_number ;
    DATE birthdate ;} ;
STAFF::STAFF(int a , char b , int c , string d){
       serial_number = a ;
        gender = b ;
        birthdate.set1(c) ;
        ID_number = d ;
}
STAFF::STAFF(const STAFF &p){
serial_number = p.serial_number ;
gender = p.gender ;
birthdate = p.birthdate ;
ID_number = p.ID_number ;
}
void STAFF::inputInformation(int a , char b , int c , string d){
    serial_number = a ;
        gender = b ;
        birthdate.set1(c) ;
        ID_number = d ;
}
inline void STAFF::outputInformation(){
cout << "编号：" << serial_number << " " ;
cout << "性别：" << gender << " " ;
cout << "出生日期：" << birthdate.get() << " " ;
cout << "身份证号：" << ID_number << endl ;}
int main(){
STAFF m(0 , 'M', 0 , 0) ;
int x1 , x3 ;
string x4 ;
char x2 ;
cout << "请分别输入该成员的编号、性别（男性为M,女性为F）、出生日期（8位出生年月日）、身份证号" << endl ;
cin >> x1 >> x2 >> x3 >> x4 ;
m.inputInformation(x1 , x2 , x3 , x4) ;
cout << "他的个人信息如下：" << endl ;
m.outputInformation() ;
return 0 ;
}
