/*#include<stdio.h>
int main()
{
	int a[46];
	for (int i =2;i < 46;i++)
	{
		a[0] = 1;
		a[1] = 1;
		a[i] = a[i - 1] + a[i - 2];
	}
	for (int i = 0;i < 46;i++)
	{
		if ((i+1) % 5 == 0)
		{
			printf("%d\t\n", a[i]);
		}
		else
		{
			printf("%d\t", a[i]);
		}
	}
}*/