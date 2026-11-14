#include<stdio.h>
int sum_digits(int n)
{
	int sum = 0,x;
	while (n > 0)
	{
		sum = sum + n % 10;  // 取出最后一位，加到总和
		n = n / 10;          // 去掉最后一位
	}
	
	return sum;
}
int main()
{
	int n,m;
	scanf_s("%d", &n);
	if (n >= 0)
	{
		m = sum_digits(n);
	}
	else
	{
		n = (-n);
		m = sum_digits(n);
	}
	printf("%d", m);
}