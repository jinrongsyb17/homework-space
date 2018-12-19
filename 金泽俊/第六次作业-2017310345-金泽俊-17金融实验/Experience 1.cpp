#include<iostream>
using namespace std;
enum CPU_Rank
{P1=1,P2,P3,P4,P5,P6,P7};
class CPU {
	public:
		CPU()
		{frequency=37;
		voltage=3.0;
		rank=P1;
		cout<<"CPU has been established."<<endl;
		}
		void show();
		~CPU(){cout<<"CPU has been destoryed."<<endl;}
		int run(){cout<<"CPU is running."<<endl;}
		int stop(){cout<<"CPU has stopped."<<endl;}
	private:
	int frequency ;
	float voltage;
	CPU_Rank rank;};
	void CPU::show() {
cout << "Frequency:" << frequency << endl;
cout << "Voltage:" << voltage << endl;
cout << "Rank" << rank << endl;
}

int main()
{CPU c;
c.run();
c.stop();
c.show();
return 0;
};
