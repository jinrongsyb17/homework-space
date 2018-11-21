#include<iostream>
using namespace std;

int main()
{
    int hang,lie;
    cout << "请输入矩阵的行数：";
    cin>>hang;
    cout << "请输入矩阵的列数：";
    cin>>lie;
    int jvzhen[hang][lie];
    for(int i=0;i<hang;i++){
        cout<<"请输入矩阵第"<<i+1<<"行的元素：";
        for(int j=0;j<lie;j++)
            cin>>jvzhen[i][j];
    }    
    cout<<"该矩阵转置后为："<<endl;
    for(int j=0;j<lie;j++){
        for(int i=0;i<hang;i++)
            cout<<jvzhen[i][j]<<"  ";
        cout<<endl;
    }
    return 0;
}
    