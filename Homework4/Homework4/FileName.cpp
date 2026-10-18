/*#include<stdio.h>
int main()
{
    
    int scores[10] = { 72, 85, 91, 68, 95, 78, 82, 88, 76, 100 };
    int sum = 0;
    int target = 100;
    int index[10] = {-1};
    int match_count = 0;
    

   
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", scores[i]); 
        sum += scores[i];
        if (scores[i] == target)
        {
            index[match_count] = i; 
            match_count++;              

        }
    }

    if (index[10]={-1})
    {
        printf("没有满分");
    }
    else
    {
        printf("满分下标：%d", index);
    }
    printf("平均分：%.1lf", sum / 10.0);
    printf("\n");  
    return 0;
}
*/