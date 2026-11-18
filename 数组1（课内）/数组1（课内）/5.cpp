/*#include<stdio.h>
int main()
{
    int count[9] = { 0 };
    int n, x;
    scanf_s("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf_s("%d", &x);
        if (x >= 1 && x <= 8)
        {
            count[x]++;   //count[3]++;意为count[]={0,0,0,++,0,0,0,0,0}
        }
        else
        {
            printf("invalid: %d\n", x);
        }
    }

    printf("栏目编号\t得票数\n");
    for (int i = 1; i <= 8; i++)
    {
        printf("%d\t\t%d\n", i, count[i]);
    }
    return 0;
}
*/