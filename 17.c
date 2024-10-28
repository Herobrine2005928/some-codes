#include <stdio.h>
#include <ctype.h>

int main() 
{
    char ch;
    int letters = 0, spaces = 0, digits = 0, others = 0;

    printf("请输入一行字符：\n");

    while ((ch = getchar()) != '\n')
    {
        if (isalpha(ch))
        { 
            letters++;
        }
        else if (isspace(ch))
        { 
            spaces++;
        }
        else if (isdigit(ch)) 
        { 
            digits++;
        } 
        else 
        { 
            others++;
        }
    }

    printf("字母个数：%d\n", letters);
    printf("空格个数：%d\n", spaces);
    printf("数字个数：%d\n", digits);
    printf("其他字符个数：%d\n", others);

    return 0;
}