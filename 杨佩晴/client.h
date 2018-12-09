#pragma once
class CLIENT {
public:
	CLIENT(int ID, int age, int time) {
		this->ID = ID;
		this->age = age;
		this->time = time;
	}
	void getTime();
	void getAge();
	void getID();
	static void show();
private:
	int ID, age, time;
	static int number;
};
