#include<iostream>
using namespace std;

enum CPU_Rank{P1=1,P2,P3,P4,P5,P6,P7}
;
class CPU{
	public:
		CPU():rank(P5),frequency(20),voltage(2.6){
			cout<<"construct a CPU"<<endl;
		}
		CPU(CPU &c){
			rank=c.rank;
			frequency=c.frequency;
			voltage=c.voltage;
			cout<<"copy cpu"<<endl;
		}
		~CPU(){
			cout<<"destruct CPU"<<endl;
		}
	    
	private:
		CPU_Rank rank;
		int frequency;
		float voltage;
		
};

class RAM{
	public:
		RAM():frequency(2400),deposit(32){
			cout<<"construct a ram"<<endl;
		}
		RAM(RAM &r){
			frequency=r.frequency;
			deposit=r.deposit;
			cout<<"copy ram"<<endl;
		}
		~RAM(){
			cout<<"destruct ram"<<endl;
		}
	private:
		int frequency;
		int deposit;
};

class CDROM{
	public:
		CDROM():frequency(3600),deposit(16){
			cout<<"construct a cdrom"<<endl;
		}
		CDROM(CDROM &cd){
			frequency=cd.frequency;
			deposit=cd.deposit;
			cout<<"copy cdrom"<<endl;
		}
		~CDROM(){
			cout<<"destruct cdrom"<<endl;
		}
	private:
		int frequency;
		int deposit;
};
class computer{
	private:
		CPU cpu;
		RAM ram;
		CDROM cdrom;
	public:
		computer(CPU cpu1,RAM ram1 ,CDROM cdrom1):cpu(cpu1),ram(ram1),cdrom(cdrom1){
			cout<<"construct computer"<<endl;
		}
	    void run() 
		{
		cout<<"this computer is running"<<endl;
		}
		void stop()
		{	
		cout<<"this computer stop running"<<endl;	
		}
		~computer(){
			cout<<"destruct computer"<<endl;
		}
};

int main(){
	CPU cpu;
	RAM ram;
	CDROM cdrom;
	cout<<"+++++++++++++++++++++++++++"<<endl;
	computer com(cpu,ram,cdrom);
	cout<<"+++++++++++++++++++++++++++"<<endl;
	return 0;
}
