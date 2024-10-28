#include <stdio.h>

int main() 
{
    void sortArray(int *arr, int n);
    double average(int *arr, int n);

    int n, i;
    printf("请输入数组的长度：");
    scanf("%d", &n);

    int arr[n];
    printf("请输入%d个整数：\n", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    sortArray(arr, n);

    double avrg = average(arr, n);

    printf("排序后的数组：\n");
    for(i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("平均值：%.2lf\n", avrg);

    return 0;
}

void sortArray(int *arr, int n) 
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++) 
    {
        for (j = i + 1; j < n; j++) 
        {
            if (arr[i] > arr[j]) 
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

double average(int *arr, int n) 
{
    double sum = 0;
    for(int i = 0; i < n; i++) 
    {
        sum += arr[i];
    }
    return sum / n;
}