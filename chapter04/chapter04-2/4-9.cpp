#include <iostream>
using namespace std;

int main(void)
{
	int a = 10;
	double b = 3.4;

	cout << sizeof(a) << endl;
	cout << sizeof(b) << endl;
	cout << sizeof(10) << endl;
	cout << sizeof (1.5+3.4) << endl;//��ȣ ������ �� 11.4 ���� => (sizeof 1.5) +3.4
	cout << sizeof(char) << endl;
	//sizeof ������ ��� ��, ���ǻ� �ǿ����ڿ� ��ȣ�� �������
	return 0;
}