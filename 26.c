#include <stdio.h>

int main() 
{
    int peaches = 1; // 第10天早上剩下的桃子数量
    int days = 9; // 还需要逆推的天数

    while (days > 0) 
    {
        peaches = (peaches + 1) * 2; // 逆推前一天的桃子数量
        days--;
    }

    printf("第一天猴子共摘了 %d 个桃子。\n", peaches);

    return 0;
}