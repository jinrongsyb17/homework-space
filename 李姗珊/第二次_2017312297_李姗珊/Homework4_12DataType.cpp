

#include<iostream>
using namespace std;

class DataType{
private:
    int a;
    float b ;
    char c;
    
    
public:
    //默认构造函数
    DataType(){
        a=0;
        b=0.0f;
        c='A';
    }
    //带参数的构造函数
    DataType(char ch){
        c=ch;
    }
    DataType(int in){
        a=in;
    }
    DataType(float d){
        b=d;
    }
    DataType(int i,float f,char ch){
        a=i;
        b=f;
        c=ch;
    }
    //访问器
    int getInt(){
        return a;
    }
    double getFloat(){
        return b;
    }
    char getChar(){
        return c;
    }
    //设置器
    void setInt(int i){
        a=i;
    }
    void setFlaot(double d){
        b=d;
    }
    void setChar(char ch){
        c=ch;
    }
    //控制台输入函数
    void input();
    //将数据显示在控制台
    void print();
    
};

void DataType::input(){
    cout<<"输入浮点数、字符、整数"<<endl;
    cin>>a>>b>>c;
}

void DataType::print(){
    cout<<"输入的数据为："<<endl;
    cout<<a<<" "<<b<<" "<<c<<endl;
}


