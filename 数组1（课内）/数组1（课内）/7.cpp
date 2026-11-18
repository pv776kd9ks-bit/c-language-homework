/*#include<stdio.h>
int main()
{
	int a[5];
	for (int i = 0;i < 5;i++)
	{
		scanf_s("%d", &a[i]);
	}
	int max, min;
	for (int i = 0;i < 5;i++)
	{
		max = a[0];
		if (a[i] > a[0])
		{
			max = a[i];
		}
	}
	printf("最大值为%d\n", max);
	for (int i = 0;i < 5;i++)
	{
		min = a[0];
		if (a[i] < a[0])
		{
			min = a[i];
		}
	}
	printf("最小值为%d\n", min);
	for (int i = 4;i >= 0;i--)
	{
		printf("%d", a[i]);
	}
}
*/