#include<iostream>
using namespace std;

enum CPU_Rank{P1=1,P2,P3,P4,P5,P6,P7}
;

class CPU{
	public:
		CPU():rank(P5),frequency(20),voltage(2.6){
			cout<<"construct one CPU"<<endl;
			cout<<"rank:"<<rank<<endl;
	     	cout<<"frequency:"<<frequency<<"MHz"<<endl;
	    	cout<<"voltage:"<<voltage<<"V"<<endl;
		}
		~CPU(){
			cout<<"destruct CPU"<<endl;
		}
	    void run() 
		{
		cout<<"this cpu is running"<<endl;
		}
		void stop()
		{	
		cout<<"this cpu stop running"<<endl;	
		}
	private:
		CPU_Rank rank;
		int frequency;
		float voltage;
		
};

int main(){
	CPU c1;
	c1.run();
	c1.stop();
	return 0;	
}
