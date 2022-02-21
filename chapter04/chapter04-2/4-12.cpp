#include <iostream>
using namespace std;

int main(void)
{
	int a = 10, b = 20, res;

	res = (a > b) ? a : b;
	//(a > b) ? (res = a) : (res = b); 로도 사용가능
	//=>그러나 res= 을 중복으로 사용하기에 추천 x
	cout << "큰 값:" << res << endl;

	return 0;
}