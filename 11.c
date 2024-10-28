/*  判断奇偶性*/
#include <stdio.h>
int main() 
{
    int a;
    printf("请输一个整数:\n");
    scanf("%d", &a);
    if (a < 0)
	{
        printf("%d is a negative even number\n",a);
    }
	else if (a%2==0)
	{
        printf("%d is a positive even number\n",a);
    } 
	else 
	{
        printf("%d is a positive odd number\n",a);
    }
    return 0;
}