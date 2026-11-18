#include<stdio.h>
int main()
{
	int a[12];
	for (int i = 0;i < 12;i++)
	{
		scanf_s("%d", &a[i]);
	}
	int index_max, index_min;
	for (int i = 0;i < 12;i++)
	{
		index_max = 0;
		if (a[i] > a[index_max])
		{
			index_max = i;
		}
		else if (a[i] == a[0])
		{
			break;
		}
	}
	printf("最大值下标：%d", index_max);
	for (int i = 0;i < 12;i++)
	{
		index_min = 0;
		if (a[i] < a[index_min])
		{
			index_min = i;
		}
		else if (a[i] == a[0])
		{
			break;
		}
	}
	printf("最小值下标：%d", index_min);
}