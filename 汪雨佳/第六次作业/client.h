//client.h
#ifndef CLIENT_H
#define CLIENT_H

class CLIENT
{
public:
	CLIENT() {}
	CLIENT(int date, int id, int age);
	~CLIENT() {}
	int getid() const;
	int getage() const;
	static int gettotal();
	void show() const;
private:
	int id;
	int age;
	int date;
	static int total;
};
#endif // CLIENT_H