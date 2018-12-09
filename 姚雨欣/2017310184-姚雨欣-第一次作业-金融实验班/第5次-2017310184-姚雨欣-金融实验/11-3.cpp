#include <fstream>
using namespace std;

int main() {
	ofstream file1("test.txt");
	file1<< "Ð´ÈëÎÄ¼þ";
	file1.close();
	return 0;

}