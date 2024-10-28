#include <stdio.h>
#include <ctype.h>

int main() 
{
    char str[50] = "I love China!";
    int uppercase = 0, lowercase = 0, spaces = 0;
    int i;

    for (i = 0; str[i] != '\0'; i++) 
    {
        if (isupper(str[i])) 
        {
            uppercase++;
        } 
        else if (islower(str[i])) 
        {
            lowercase++;
        } 
        else if (isspace(str[i])) 
        {
            spaces++;
        }
    }

    printf("大写字母数量: %d\n", uppercase);
    printf("小写字母数量: %d\n", lowercase);
    printf("空格字符数量: %d\n", spaces);

    strcpy(str, "Hello, World!");

    printf("新的字符串: %s\n", str);
    printf("第5个字符: %c\n", str[4]); 

    return 0;
}