#include <iostream>
using namespace std;

int main(void)
{
	int a = 10, b = 20, res;

	res = (a > b) ? a : b;
	//(a > b) ? (res = a) : (res = b); �ε� ��밡��
	//=>�׷��� res= �� �ߺ����� ����ϱ⿡ ��õ x
	cout << "ū ��:" << res << endl;

	return 0;
}