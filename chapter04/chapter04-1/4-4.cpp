#include <iostream>
using namespace std;
//���� ǥ��
int main(void)
{
	int a = 5, b = 5;
	int pre, post;

	pre = (++a) * 3;
	post = (b++) * 3;//b�� �����Ǳ� ���� ���� 3�� ����
	
	cout << "�ʱ갪:" << a << ' ' << b << endl;
	cout << pre << " " << post << endl;

	return 0;
}