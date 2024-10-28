#include <stdio.h>

void bubbleSort(int *arr, int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void Sorted(int *arr, int n) 
{
    int i = 0, j = n - 1;
    while (i < j) 
    {
        printf("%d ", arr[j--]); 
        if (i < j) {
            printf("%d ", arr[i++]); 
        }
    }
    if (i == j) 
    {
        printf("%d ", arr[i]); 
    }
    printf("\n");
}

int main() 
{
    int arr[10];
    printf("请输入10个整数：\n");
    for (int i = 0; i < 10; i++) 
    {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, 10);
    printf("按照最大、最小、次最大、次最小等的顺序排序后的结果为：\n");
    Sorted(arr, 10);

    return 0;
}