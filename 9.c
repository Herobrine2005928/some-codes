#include <stdio.h>
#include <string.h>
int main() 
{
     char a[100];//定义一个字符数组a，用于存储用户输入的字符串。
     printf("请输入字符串：");
     fgets(a, sizeof(a), stdin);//从标准输入读取字符串，并存储到数组a中。
     char b[100];//定义一个字符数组b，用于存储转换后的字符串。
     int i;//定义一个整型变量i，用于循环遍历字符串。
     for (i = 0; i < strlen(a); i++) 
     {//使用strlen函数获取字符串的长度，然后使用for循环遍历字符串。
             if ( a[i] > 64 && a[i] < 91 ) //当前字符是否为大写字母。
                 b[i] = (a[i]) + 32;// 将大写字母转换为小写字母。
             else if ( a[i] > 96 && a[i] < 123 ) //当前字符是否为小写字母。
                 b[i] = (a[i]) - 32;// 将小写字母转换为大写字母。
             else
                 b[i] = a[i];// 保持其他字符不变。
     }
    printf("转换后的字符串：%s\n", b);
     return 0;
}