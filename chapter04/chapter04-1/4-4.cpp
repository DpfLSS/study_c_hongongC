#include <iostream>
using namespace std;
//후위 표기
int main(void)
{
	int a = 5, b = 5;
	int pre, post;

	pre = (++a) * 3;
	post = (b++) * 3;//b가 증가되기 전의 값을 3과 곱함
	
	cout << "초깃값:" << a << ' ' << b << endl;
	cout << pre << " " << post << endl;

	return 0;
}