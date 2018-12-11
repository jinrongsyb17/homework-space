//client.h
#ifndef __CLIENT_H__
#define __CLIENT_H__
class CLIENT{
public:
	CLIENT(int ID);
	virtual ~CLIENT();
	virtual int GetID();
	virtual void SetID(int ID1);

private:
	int ID;
	static int CLIENTNUM;
};

#endif// __CLIENT_H__