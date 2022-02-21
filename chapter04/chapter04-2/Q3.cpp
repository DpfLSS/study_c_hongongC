#include <iostream>
using namespace std;

int main(void)
{
	int hour, min, sec;
	double time = 3.76;

	hour=(int)time;
	time -=hour;
	time *= 60;
	min = (int)time;
	time -= min;
	time *= 60;
	sec = (int)time;
	cout << 3.76 << "시간은 " << hour << "시간 " << min << "분 " << sec << "초 입니다." << endl; 
	
	return 0;
}