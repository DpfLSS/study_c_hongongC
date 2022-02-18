#include <iostream>
using namespace std;
int main(void)
{
	char fruit[20] = "strawberry";
	fruit = "banana";//char 배열은 대입 연산 사용 불가능. 
	cout << fruit << endl;
	cout << fruit << ' ' << "jam" << endl;
	

	return 0;
}