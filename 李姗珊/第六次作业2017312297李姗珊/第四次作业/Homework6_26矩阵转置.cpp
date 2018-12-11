#include<iostream>
using namespace std;
int main(){
    int row,column;
    cout<<"输入行数"<<endl;
    cin>>row;
    cout<<"输入列数"<<endl;
    cin>>column;
    int array[row][column];
    for(int i=0;i<row;i++){
        cout<<"输入第"<<i+1<<"行的数字"<<endl;
        for(int k=0;k<column;k++){
            cin>>array[i][k];
        }
    }
    
    cout<<"你输入的数组是："<<endl;
    for(int h=0;h<row;h++){
        for(int j=0;j<column;j++){
            cout<<array[h][j]<<"  ";
        }
        cout<<" "<<endl;
    }
    cout<<"转置后的数组是："<<endl;
    for(int h=0;h<column;h++){
        for(int j=0;j<row;j++){
            cout<<array[j][h]<<"  ";
        }
        cout<<" "<<endl;
    }
    
    return 0;
}


