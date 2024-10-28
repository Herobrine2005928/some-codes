#include <stdio.h>

int main() 
{
    int nums1[9];
    int new_num;
    int num_count = 0;

    // 输入9个整数
    printf("请输入9个整数：\n");
    for (int i = 0; i < 9; i++) 
    {
        scanf("%d", &nums1[i]);
        num_count++;
    }

    // 冒泡排序
    for (int i = 0; i < num_count - 1; i++) 
    {
        for (int j = 0; j < num_count - i - 1; j++) 
        {
            if (nums1[j] < nums1[j + 1]) 
            {
                int temp = nums1[j];
                nums1[j] = nums1[j + 1];
                nums1[j + 1] = temp;
            }
        }
    }

    // 输出降序排列的9个整数
    for (int i = 0; i < 9; i++) 
    {
        printf("%d ", nums1[i]);
    }
    printf("\n");

    // 输入一个新的整数并插入到降序排列的数组中
    int nums2[10];      
    for (int i = 0; i < num_count+1; i++)
    {
        nums2[i] = nums1[i];

    }
    printf("请输入一个两位数以内的正整数：\n");
    scanf("%d", &new_num);

    for (int i = 0; i < num_count + 1; i++) 
    {
        if (nums2[i] < new_num) 
        {
            for (int j = num_count; j > i; j--) 
            {
                nums2[j] = nums2[j - 1];
            }
            nums2[i] = new_num;
            break;
        }
    }

    // 输出插入新整数后的降序排列的9个整数
    printf("插入新整数后的降序排列的9个整数为：\n");
    for (int i = 0; i < 10; i++) 
    {
        printf("%d ", nums2[i]);
    }
    printf("\n");

    return 0;
}
