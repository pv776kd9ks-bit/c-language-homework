#include<stdio.h>
int main()
{
	int level;
	double price,rate;
	double pay = 0.00;
	scanf_s("%d %lf", &level,&price);

	switch (level)
	{
	case 1:
		rate = 0.9;
		pay = price * rate;
		printf("pay =%.2lf", pay);
		break;
	case 2:
		rate = 0.8;
		pay = price * rate;
		printf("pay =%.2lf", pay);
		break;
	case 3:
		rate = 0.7;
		pay = price * rate;
		printf("pay =%.2lf", pay);
		break;
	default:
		pay = price;
		printf("pay=%.2lf", pay);
		break;
	}
	return 0;
}