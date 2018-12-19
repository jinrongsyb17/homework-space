class client {
public:
	client() { count++; };
	void getname() {};
	~client() {};
private:
	static int count;
};
