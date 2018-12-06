#include<fstream>
using namespace std;
int main() {
	ofstream file1("test1.txt");
	file1 << "已成功写入文件";
	file1.close();
	system("pause");
	return 0;
}