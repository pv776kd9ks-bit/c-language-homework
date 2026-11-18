/*#include<stdio.h>
int main()
{
	int n;
	int a[10];
	scanf_s("%d", &n);
	int index = 0;
	for (int i = 0;i < n;i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (int i = 1;i < n;i++)
	{
		if (a[index] > a[i])
		{
			index = i;
		}
	}
	printf("Index is %d\n", index);
	int m = a[0];
	a[0] = a[index];
	a[index] = m;
	for (int i = 0;i < n;i++)
	{
		printf("%d", a[i]);

	}
}*/