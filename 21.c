#include <stdio.h>
#include <string.h>

int main() 
{
    char str1[100], str2[100];

    printf("请输入第一个字符串：\n");
    scanf("%s", str1);
    printf("请输入第二个字符串：\n");
    scanf("%s", str2);

    char result[100];

    strcpy(result, str1);
    strcat(result, " ");
    strcat(result, str2);

    printf("连接后的字符串是：%s\n", result);

    return 0;
}
