#include <iostream>
using namespace std;

int main(void)
{
	int kor = 3, eng = 5, mat = 4;
	int credits;
	int res;
	double kscore = 3.8, escore = 4.4, mscore = 3.9;
	double grade;
	
	credits = kscore + escore + mscore;
	grade = (kor * kscore + eng * escore + mat * mscore) / credits;
	res = credits >= 10 && grade >= 4.0; //논리 연산자를 이용해서 결괏값 반환하기
	cout << res << endl;
	
	return 0;
}