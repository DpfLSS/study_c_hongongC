#include <iostream>
using namespace std;

int main(void)
{
	double kg, cm, BMI;
	//kg,cm �Է�
	cout << "ü���� �Է��ϼ���:"; cin >> kg;
	cout << "Ű�� �Է��ϼ���:"; cin >> cm;
	
	//BMI ���
	cm /= 100; //m������ ȯ��
	BMI =  kg / (cm*cm) ;
	
	//��� ���
	(BMI >= 20.0 && BMI < 25.0) ? (cout << "ǥ���Դϴ�.") : (cout << "ü�߰����� �ʿ��մϴ�.");
	
	/*
	if (BMI >= 20.0 && BMI < 25.0)
		cout << "ǥ���Դϴ�." << endl;
	else
		cout << "ü�߰����� �ʿ��մϴ�." << endl;
	*/
	return 0;
} 