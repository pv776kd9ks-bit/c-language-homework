#include<stdio.h>
#define PI 3.14
int main()
{ 
	double r;
	scanf_s("%lf", &r);
	printf("area=%.2lf\n", r * r * PI);
	printf("circumference=%.2lf", 2 * r * PI);
	return 0;
}