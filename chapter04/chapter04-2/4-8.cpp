#include <iostream>
using namespace std;

int main(void)
{
	int a = 20, b = 3;
	double res;

	res = ((double)a) / ((double)b); //a와 b가 실수로 바뀜 => 처음부터 double 선언하면 저장 공간 크고 속도 느리고 오차 발생
	                                 //따라서 int형으로 선언하고 필요할 때 형 변환하는 것이 좋음
	cout << a << ' ' << b << endl;
	cout << res << endl;

	a = (int)res; //실수에서 정수 부분을 추릴 때 유용하게 사용 가능(반올림 하지 않고 무조건 버림)
	cout << res << ' ' << a << endl;
	return 0;
}