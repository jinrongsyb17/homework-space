#include <iostream> //preprocessor directives
#include <fstream>
#include <string>
using namespace std ;
//using namespace std;
//using namespace 使用命名空间
//std : standard library 标准程序库
class Dog{
public:
int weight , age ;
Dog(int x , int y):weight(x) , age(y){} ;
Dog(){} ;
};
int main(){
Dog dog1(5 , 10) ;
ofstream file("dog.dat" , ios_base::out|ios_base::binary) ;
file.write(reinterpret_cast<char*>(&dog1) , sizeof(dog1)) ;
Dog dog2 ;
file.close() ;
ifstream File("dog.dat" , ios_base::in|ios_base::binary) ;
File.read(reinterpret_cast<char*>(&dog2) , sizeof(dog2)) ;
File.close() ;
cout << dog2.weight << " " << dog2.age << endl ;
return 0 ;
}

