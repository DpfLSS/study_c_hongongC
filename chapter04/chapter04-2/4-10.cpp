#include <iostream>
using namespace std;

int main(void)
{
	int a = 10, b = 20;
	int res = 2;

	a += 20; 
	res *= b + 10; //b+10을 먼저 수행한 후 그 결과값과 res 곱함.

	cout << a << ' ' << b << endl;
	cout << res << endl;

	return 0;
}