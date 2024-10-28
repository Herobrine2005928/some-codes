#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int add_problem(int num1,int num2) 
{
    int add_result = num1 + num2;
    return add_result;
}

int main() 
{
    int count = 0;
    int num1 = rand() % 100 + 1;
    int num2 = rand() % 100 + 1;
    int add_problem();
    printf("给小学生出加法考试题\n");
    printf("第一个加数为：%d\n", num1);
    printf("第二个加数为：%d\n", num2);
    while (count < 3) 
    {
        int add_result = add_problem(num1,num2);
        int user_input = 0;
        printf("请输入两个加数的和：");
        scanf("%d", &user_input);
        if (user_input == add_result) 
        {
            printf("Right!\n");
            break;
        } 
        else 
        {
            count++;
            if (count < 3) 
            {
                printf("Not correct! Try again!\n");
            } 
            else 
            {
                printf("Not correct. You have tried three times! Test over!\n");
            }
        }
    }
    system("pause");
    return 0;
}
