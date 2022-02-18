#include <iostream>
using namespace std;

int main(void)
{
	char fruit[20];
	int cnt;

	cout << "좋아하는 과일:"; cin >> fruit;
	cout << "몇 개?:"; cin >> cnt;
	cout << fruit << "를 " << cnt << "개 드립니다." << endl;

	return 0;
}