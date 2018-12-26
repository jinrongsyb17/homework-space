#include<fstream>
using namespace std;

int main(){
    ofstream filel("text.txt");
    filel<<"已成功写入文件！";
    filel.close();
    return 0;
}
