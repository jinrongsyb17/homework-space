#include<iostream>
using namespace std;
void change(int **p,int n){
	int i,j,k;
	for(i=0;i<n;i++)
	for(j=0;j<i;j++)
	{k=*(*(p+i)+j);
	*(*(p+i)+j)=*(*(p+j)+i);
	*(*(p+j)+i)=k;
}
} 

int main(){
	int n,i,j;
	cout<<"请输入矩阵的行列数："<<endl;
	cin>>n;
	int **matrix=new int*[n];
	for(int a=0;a<n; a++)   
    matrix[a]=new  int[n]; 
	cout<<"请输入矩阵："<<endl;
	for(i=0;i<n;i++)
	{
	cout<<"请输入第"<<i+1<<"行"<<endl;
		   for(j=0;j<n;j++)
		 {  cout<<"请输入第"<<j+1<<"列"<<endl; 
	      cin>>matrix[i][j];
	  }}
	  cout<<"矩阵为："<<endl; 
	  for(i=0;i<n;i++)
	   {
	   for(j=0;j<n;j++)
	      cout<<matrix[i][j];
	      cout<<endl;
	  }
	change(matrix,n);
    cout<<"转置矩阵为："<<endl; 
	for(i=0;i<n;i++)
	   {
	   for(j=0;j<n;j++)
	      cout<<matrix[i][j];
	      cout<<endl;
	  }
	     for(int  m=0;m<n;m++)  
          delete[]   matrix[m];  
          delete[]   matrix;  

		  return 0;
}
