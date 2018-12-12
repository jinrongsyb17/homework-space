#include<iostream>
using namespace std;
enum CPU_Rank {P1=1,P2,P3,P4,P5,P6,P7};
class CPU
{
private:
    CPU_Rank rank;
 int frequency;
 float voltage;
public:
 CPU(int newrank,int newfrequency,float newvoltage);
 void run();
 void stop();
 ~CPU(){cout<<"成功调用析构函数"<<endl;}
};
void CPU::run()
{
 cout<<"程序开始执行"<<endl;

}
void CPU::stop()
{
 cout<<"程序结束"<<endl;
}
CPU::CPU(int newrank,int newfrequency,float newvoltage)
{
 rank=(CPU_Rank)newrank;
 frequency=newfrequency;
 voltage=newvoltage;
    cout<<"成功调用构造函数"<<endl;
 cout<<"等级："<<CPU_Rank(P1)<<endl;
 cout<<"频率："<<frequency<<endl;
 cout<<"电压："<<voltage<<endl;
}
int main()
{
 CPU cpu(2,60,220);
 cpu.run();
 cpu.stop();
 return 0;
}
