/*#include<stdio.h>
int main()
{
    int a;
    int max;
    int i = 0;
    int found;
    while (i < 10)
    {
        scanf_s("%d", &a);
        if (a % 2 == 0)
        {
            max = a;
            found = 1;
            i++;
            break;
        }
        i++;
    }
    if (found == 0)
    {
        printf("No even found\n");
    }
    while (i < 10)
    {
        scanf_s("%d", &a);     
        if (a % 2 == 0 && a > max)
        {
            max = a;    
        }
        i++;
    }
    printf("Max even: %d\n", max);
}

*/