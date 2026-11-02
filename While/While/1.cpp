/**#include<stdio.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	double sum = 0;
	int i=1;
	while (i <= n)
	{
		sum += 1.0 / (2 * i - 1);
		i++;
	}
	printf("%f", sum);
}*/