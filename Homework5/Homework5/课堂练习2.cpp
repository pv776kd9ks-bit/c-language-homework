/*题目：密码校验程序
要求：
预设正确密码为 "admin123"
用户从键盘输入一个字符串
用 strcmp 对比输入和正确密码
相等输出「登录成功」，不相等输出「密码错误」*/

/*#include<stdio.h>
#include<string.h>
int main()
{
    char src[20] = "admin123";
    char dest[20];
    scanf_s("%s", dest, (unsigned int)sizeof(dest));
    int result;
    result = strcmp(src, dest);

    if (result==0)
    {
        printf("登陆成功");
    }
    else
    {
        printf("密码错误");
    }
    getchar();
    getchar();
    return 0;
}
*/