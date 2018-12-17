#include <fstream.h> 
void main() 
{
ofstream file1("test.txt");
file1 << "已成功写入文件！";
file1.close();
}
