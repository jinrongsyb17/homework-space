#include <fstream.h>

class dog{
public:
    dog(int weight, long days):itsWeight(weight),
    itsNumberDaysAlive(days){}
    ~dog(){}
    int GetWeight()const { return itsWeight; }
    void SetWeight(int weight) { itsWeight = weight; }
    long GetDaysAlive()const { return itsNumberDaysAlive; }
    void SetDaysAlive(long days) { itsNumberDaysAlive = days; }
private:
    int itsWeight;
    long itsNumberDaysAlive;
};

int main(){ // returns 1 on error
    char fileName[80];
    cout << "Please enter the file name: ";
    cin >> fileName;
    ofstream fout(fileName);
    // ofstream fout(fileName,ios::binary);
    if (!fout){
        cout << "Unable to open " << fileName << " for writing.\n";
    return(1);
	}
    dog Dog1(5,10);
    fout.write((char*) &Dog1,sizeof Dog1);
    fout.close();
    ifstream fin(fileName);
    // ifstream fin(fileName,ios::binary);
    if (!fin){
       cout << "Unable to open " << fileName << " for reading.\n";
    return(1);
	}
    dog Dog2(2,2);
    cout << "Dog2 weight: " << Dog2.GetWeight() << endl;
    cout << "Dog2 days: " << Dog2.GetDaysAlive() << endl;
    fin.read((char*) &Dog2, sizeof Dog2);
    cout << "Dog2 weight: " << Dog2.GetWeight() << endl;
    cout << "Dog2 days: " << Dog2.GetDaysAlive() << endl;
    fin.close();
    return 0;
}