#include<fstream>
 using namespace std;
 
 int main(){
 	ofstream file("test1.txt");
 	file<<"已成功写入文件！";
	 file.close();
	 return 0;
 }
