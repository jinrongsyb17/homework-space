#pragma once
class CLIENT {
public:
	CLIENT(double a=0, double b=0) {
		 age = a;
	 height = b;
	}
	double getage()const  { return age; }
	double getheight()const { return height; }
	static void showCount();

private:
	double age;
    double height;
	static int count;
};
