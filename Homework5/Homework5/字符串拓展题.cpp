/*#### 题目要求

1. 系统预设 3 个合法用户名：`"zhangsan"`、`"lisi"`、`"wangwu"`，存放在二维字符数组中
2. 用户从键盘输入一个用户名
3. 遍历所有合法用户名，用 `strcmp` 逐个比对
4. 匹配成功输出「用户存在，欢迎登录」；全部遍历完未匹配，输出「用户不存在」*/

#include<stdio.h>
#include<string.h>
int main()
{
	char arr[3][20] = { "zhangsan","lisi","wangwu" };
	char input[20];
	int result=0;
	scanf_s("%s", input, (unsigned int)sizeof(input));
	for (int i = 0;i < 3;i++)
	{
	
		if (strcmp(arr[i], input) == 0)
		{
			result = 1;
			break;
		}
	}
	if (result ==1)
	{
		printf("用户存在，登录成功");
	}
	else
	{
		printf("用户不存在");
	}
	getchar();
	getchar();
	return 0;
}