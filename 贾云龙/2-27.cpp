#include<iostream>
using namespace std;
int main() {
	int n;
	cout << " 你的考试得分：" << endl;
	cin >> n;
	if (90 <= n &&n <= 100)
		cout << "优";
	else if (80 <= n&&n < 90)
		cout << "良";
	else if (60 <= n &&n < 80)
		cout << "中";
	else

	cout << "差";
	system("pause");
	return 0;
}
