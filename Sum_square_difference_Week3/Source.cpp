#include<stdio.h>

int main()
{
	int num1[5];
	num1[0] = 1;
	num1[1] = num1[2] = num1[3] = num1[4] = 0;
	printf("%d%d%d%d%d", num1[0], num1[1], num1[2], num1[3], num1[4]);


	return 0;
}