#include <iostream>
using namespace std;

int main(void)
{
	int a = 10;
	double b = 3.4;

	cout << sizeof(a) << endl;
	cout << sizeof(b) << endl;
	cout << sizeof(10) << endl;
	cout << sizeof (1.5+3.4) << endl;//괄호 없으면 값 11.4 나옴 => (sizeof 1.5) +3.4
	cout << sizeof(char) << endl;
	//sizeof 연산자 사용 시, 편의상 피연산자에 괄호를 사용하자
	return 0;
}