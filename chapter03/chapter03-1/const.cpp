#include <iostream>
using namespace std;

int main(void)
{
	int income = 0;
	double tax;
	const double tax_rate = 0.12;//tax_rate의 값 변경 불가능
	//const 선언법
	//const 자료형 변수명 = 값;
	income = 456;
	tax = income * tax_rate;
	cout << tax << endl;
	return 0;
}