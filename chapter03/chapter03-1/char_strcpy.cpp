#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;
int main(void)
{
	char fruit[20] = "strawberry";
	cout << fruit << endl;
	strcpy(fruit, "banana");
	cout << fruit << endl;

	return 0;
}