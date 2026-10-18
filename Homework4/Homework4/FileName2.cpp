/*学生成绩由高到低排序打印 求中位数 平均数 以数组的形式表示目标成绩的下标*/

#include<stdio.h>
int main()
{
    int scores[10] = { 72, 85, 91, 68, 95, 78, 82, 88, 76, 85 };
    int target = 85;
    int index_arr[10];  
    int match_count = 0; 
    int i, j, temp;
    int sum = 0;
    double ave, median;

    for (i = 0; i < 10; i++)
    {
        sum += scores[i];  
        if (scores[i] == target)
        {
            index_arr[match_count] = i; 
            match_count++;              
        }
    }

    for(i = 0; i < 10 - 1; i++)
    {
        for(j = 0; j < 10 - 1 - i; j++)
        {
            if(scores[j] > scores[j + 1])
            {
                temp = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = temp;
            }
        }
    }

    ave = sum/10.0;

    if(10 % 2 == 1)
    {
        median = scores[10 / 2];
    }
    else
    {
        median = (scores[10 / 2 - 1] + scores[10 / 2]) / 2.0;
    }
    
    printf("有%d个%d分\n", match_count, target);
    printf("target下标：");

    for(i = 0; i < match_count; i++)
    {
        printf("%d ", index_arr[i]);
    }
    printf("\n");

    for (i = 0; i < 10; i++)
    {
        printf("%d ", scores[i]);
    }
    printf("\n");

    printf("平均分：%.1lf\n", ave);
    printf("中位数：%.1lf\n", median);

    return 0;
}
