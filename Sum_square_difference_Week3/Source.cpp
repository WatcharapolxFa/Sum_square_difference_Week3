#include<stdio.h>




int Sum(int sum_squar, int sum_num)
{
	int avg = 0;
	sum_squar = sum_squar * sum_squar;
	avg = sum_squar - sum_num;

return avg;
}
int main()
{
	int num[4];
	num[0] = 1; // x
	num[1] = num[2] = num[3] = 0;
	for (num[0] = 1; num[0] < 100; num[0]++)
	{
		num[1] += (num[0] * num[0]);
		num[2] += num[0];
	}
	num[3] = Sum(num[1] , num[2]);
	printf_s("%d", num[3]);

	return 0;
}