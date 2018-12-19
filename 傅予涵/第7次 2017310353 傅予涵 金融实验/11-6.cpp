#include <iostream>
#include<fstream> 
using namespace std;
  
class Dog{
	public:
		Dog(int weight,long age):
			itsWeight(weight),itsAge(age){}
				~Dog(){
					
				}
			int getWeight()const{
			return itsWeight;
			}
			void setWeight(int weight){
				itsWeight=weight;
				
			}
			long getAge()const{
				return itsAge;
			}
			void setAge(long age){
				itsAge=age;
				}
			private:
				int itsWeight;
				long itsAge;
			};
			
int main() {
	char filename[80];
	cout<<"Please enter the file name:";
	cin>>filename;
	ofstream fout(filename);
	if(!fout){
		cout<<"unable to open"<<filename<<"for writing.\n";
		return(1);
	} 
	Dog dog1(5,10);
	fout.write((char*)&dog1,sizeof dog1);               //sizeof
	
	fout.close();
	
	ifstream fin(filename);
	if(!fin){
		cout<<"unable to open"<<filename<<"for reading.\n";
		return(1);
	}
	
	Dog dog2(2,2);
	cout<<"dog2 weight:"<<dog2.getWeight()<<endl;
	cout<<"dog2 age:"<<dog2.getAge()<<endl;
	
	fin.read((char*)&dog2,sizeof dog2);  
	cout<<"dog2 weight:"<<dog2.getWeight()<<endl;
	cout<<"dog2 age:"<<dog2.getAge()<<endl;
	fin.close();
	return 0;
}
