#include <iostream>
using namespace std;

int main(void)
{
	int a = 10, b = 20;
	int res = 2;

	a += 20; 
	res *= b + 10; //b+10�� ���� ������ �� �� ������� res ����.

	cout << a << ' ' << b << endl;
	cout << res << endl;

	return 0;
}