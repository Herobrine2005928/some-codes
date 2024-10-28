#include<stdio.h>

int main()
{
    int arr[4][3];
    int value;
    int max(int arr[][3]);
    int min(int arr[][3]);
    int avg(int arr[][3]);
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter a value between -10 and 10 for matrix[%d][%d]:\n ", i+1, j+1);
            scanf("%d", &value);
            while (value <= -10 || value >= 10) 
            {
                printf("Invalid input! Value must be between -10 and 10. Please try again:\n ");
                printf("Enter a value between -10 and 10 for matrix[%d][%d]:\n ", i+1, j+1);
                scanf("%d", &value);
            }

            arr[i][j] = value;
        }

    }
    int maxium=max(arr);
    int minium=min(arr);
    int average=avg(arr);
    printf("max=%d\n",maxium);
    printf("min=%d\n",minium);
    printf("avg=%d\n",average);
    return 0;
}

int max(int arr[][3])
{
    int max=arr[0][0];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]>max)
            max=arr[i][j];
        }
    }
    return max;
}

int min(int arr[][3])
{
    int min=arr[0][0];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]<min)
            min=arr[i][j];
        }
    }
    return min;
}

int avg(int arr[][3])
{
    int sum=0;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum+=arr[i][j];
        }
    }
    int avg=sum/12;
    return avg;
}