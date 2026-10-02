#include<stdio.h>
int main()
{
	int a, b, c,temp;
	scanf_s("%d %d %d", &a, &b, &c);
	temp = a;
	a = c;
	c = b;
	b = temp;

	printf("a=%d,",a );
	printf("b=%d,",b );
	printf("c=%d",c );
	return 0;
}