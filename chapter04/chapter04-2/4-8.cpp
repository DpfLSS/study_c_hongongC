#include <iostream>
using namespace std;

int main(void)
{
	int a = 20, b = 3;
	double res;

	res = ((double)a) / ((double)b); //a�� b�� �Ǽ��� �ٲ� => ó������ double �����ϸ� ���� ���� ũ�� �ӵ� ������ ���� �߻�
	                                 //���� int������ �����ϰ� �ʿ��� �� �� ��ȯ�ϴ� ���� ����
	cout << a << ' ' << b << endl;
	cout << res << endl;

	a = (int)res; //�Ǽ����� ���� �κ��� �߸� �� �����ϰ� ��� ����(�ݿø� ���� �ʰ� ������ ����)
	cout << res << ' ' << a << endl;
	return 0;
}