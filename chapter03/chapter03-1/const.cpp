#include <iostream>
using namespace std;

int main(void)
{
	int income = 0;
	double tax;
	const double tax_rate = 0.12;//tax_rate�� �� ���� �Ұ���
	//const �����
	//const �ڷ��� ������ = ��;
	income = 456;
	tax = income * tax_rate;
	cout << tax << endl;
	return 0;
}