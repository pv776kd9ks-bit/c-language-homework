#include<stdio.h>
int main()
{
	int n;
	int rev=0;
	scanf_s("%d", &n);

	while (n>0)
	{
		rev = rev * 10 + n % 10;
		n /= 10;
	}
	printf("reverrsed=%d", rev);
}