#include<iostream>
using namespace std;
class datatype
{
public:
    datatype(int a,float b,char c);
    void geta();
    void getb();
    char getchar();
private:
    int m_ia;
    float m_fb;
    char m_charc;
};
datatype::datatype(int a,float b,char c)
{
    m_ia=a;
    m_fb=b;
    m_charc=c;
}
void datatype::geta()
{cout<<m_ia*2<<endl;
}
void datatype::getb()
{cout<<m_fb*2<<endl;
}
char datatype::getchar()
{
    return m_charc-32;
}
int main()
{
    datatype p(5,2.5,'a');
    p.geta();
    p.getb();
    return 0;
}