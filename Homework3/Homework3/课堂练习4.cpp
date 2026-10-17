#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score;
    int sum = 0;    // 初始化0，消除C6001
    int count = 0;  // 初始化0
    double ave;

    printf("请输入成绩（输入-1结束）：");
    scanf_s("%d", &score);

    while (score != -1)
    {
        if (score >= 0 && score <= 100)
        {
            count++;
            sum += score;
        }
        else
        {
            printf("输入无效，请输入0-100之间的成绩\n");
        }

        printf("请输入成绩（输入-1结束）：");
        scanf_s("%d", &score);
    }

    if (count == 0)
    {
        printf("暂无成绩数据\n");
    }
    else
    {
        ave = sum * 1.0 / count;
        // 每行格式符和变量一一对应，类型匹配，数量一致
        printf("-----统计结果-----\n");
        printf("学生人数：%d人\n", count);   // int用%d
        printf("总分：%d\n", sum);           // int用%d
        printf("平均分：%.1lf\n", ave);      // double用%lf
    }

    return 0;
}
