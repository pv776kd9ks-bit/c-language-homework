/*#include<stdio.h>
#include<math.h>
int prime(int m)
{
    int i;
    // 1. 小于等于1，不是素数
    if (m <= 1)
        return 0;
    // 2. 2是素数
    if (m == 2)
        return 1;
    // 3. 大于2的偶数，都不是素数
    if (m % 2 == 0)
        return 0;
    // 4. 只试奇数，试到根号m为止
    for (i = 3; i <= sqrt(m); i += 2)
    {
        if (m % i == 0)  // 能被整除，说明有其他因数，不是素数
            return 0;
    }
    // 循环走完都没被整除，就是素数
    return 1;
}
int main()
{
    int x=1, y,count=0;
    while (x <= 100)
    {
        y = prime(x);
        if (y == 1)
        {
            printf("%6d", x);
            count++;
            if (count % 10 == 0)  // 每满10个就换行
            {
                printf("\n");
            }
        }
        x++;
   }
}*/