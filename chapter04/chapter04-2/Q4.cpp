#include <iostream>
using namespace std;

int main(void)
{
	double kg, cm, BMI;
	//kg,cm 입력
	cout << "체중을 입력하세요:"; cin >> kg;
	cout << "키를 입력하세요:"; cin >> cm;
	
	//BMI 계산
	cm /= 100; //m단위로 환산
	BMI =  kg / (cm*cm) ;
	
	//결과 출력
	(BMI >= 20.0 && BMI < 25.0) ? (cout << "표준입니다.") : (cout << "체중관리가 필요합니다.");
	
	/*
	if (BMI >= 20.0 && BMI < 25.0)
		cout << "표준입니다." << endl;
	else
		cout << "체중관리가 필요합니다." << endl;
	*/
	return 0;
} 