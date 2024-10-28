#include <stdio.h>

int main() 
{
    int a[15];
    int n;

    printf("请输入15个数，用空格隔开：\n");
    for (int i = 0; i < 15; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("请输入要查找的数：\n");
    scanf("%d", &n);

    int left = 0;
    int right = 14;
    while (left <= right) 
    {
        int mid = (left + right) / 2;
        if (a[mid] == n) 
        {
            printf("数组中第%d个元素的值是：%d\n", mid + 1, a[mid]);
            return 0;
        } 
        else if (a[mid] < n)
        {
            left = mid + 1;
        } else 
        {
            right = mid - 1;
        }
    }

    printf("数组中无此数\n");

    return 0;
}
