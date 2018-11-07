#include<iostream>
using namespace std;

class Datatype
{
public:
	Datatype(char cha)
	{
		mode = character;
		characters = cha;
	};
	Datatype(int int__)
	{
		mode = intl;
		int_= int__;
	}
	Datatype(double float__)
	{
		mode=floatl;
		float_ = float__;
	}
	~Datatype() {};
	void show();

private:
	enum {character,intl,floatl}mode;
	union
	{char characters;
	int int_;
	float float_;
	};
};
void Datatype::show()
{
	switch (mode) 
	{case character:
		cout << characters;
		break;
	case intl:
		cout <<int_;
		break;
	case floatl:
		cout << float_;
		break;
	}
	cout << endl;
}
void main()
{
	Datatype a('a'), b(152), c(132.2);
	a.show();
	b.show();
	c.show();
	system("pause");

}