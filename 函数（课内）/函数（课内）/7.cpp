/*#include<stdio.h>
void pyramid(int n)
{
    int i, j;
    // 外层循环：控制行数，第1行到第n行
    for (i = 1; i <= n; i++)
    {
        // 内层循环1：打印前面的空格，共 n-i 个
        for (j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        // 内层循环2：打印i个数字i，每个数字加空格
        for (j = 0; j < i; j++)
        {
            printf("%d ", i);
        }
        // 一行结束，换行
        printf("\n");
    }
}
int main()
{
	int n;
	scanf_s("%d", &n);
    pyramid(n);
}*/