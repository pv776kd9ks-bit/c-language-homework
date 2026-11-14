/*#include<stdio.h>
int IsSquare(int n)
{
	int odd = 1;
	while (n > 0)
	{
		n = n - odd;
		odd = odd + 2;
	}

	if (n == 0)
		return 1;
	else
		return 0;
}
int main()
{
	int x,y;
	scanf_s("%d", &x);
	y = IsSquare(x);
	if (y == 0)
	{
		printf("是完全平方数\n");
	}
	else
	{
		printf("不是完全平方数\n");
	}
}*/