//client.h
#ifndef CLIENT_H
#define CLIENT_H

class CLIENT
{
public:
	CLIENT() {}
	CLIENT(int id, int age);
	~CLIENT() {}
	int getid() const;
	int getage() const;
	static int gettotal();
	void show() const;
private:
	int id;
	int age;
	static int total;
};
#endif // CLIENT_H
