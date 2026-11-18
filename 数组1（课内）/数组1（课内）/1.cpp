/*#include<stdio.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	int a[100];
	for (int i = 0;i < n;i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (int i = 0;i < n / 2;i++)
	{
		int m = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = m;
	}
	for (int i = 0;i < n;i++)
	{
		printf("%d", a[i]);
	}
	
}*/