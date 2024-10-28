#include <stdio.h>

int main() 
{
    int matrix[3][3], sum, max, min, max_row, max_col, min_row, min_col;
    printf("请输入一个3行3列的整型矩阵：\n");
    for (int i = 0; i < 3; i++) 
        for (int j = 0; j < 3; j++) 
            scanf("%d", &matrix[i][j]);

    sum = matrix[0][0], max = matrix[0][0], min = matrix[0][0];
    max_row = 1, max_col = 1, min_row = 1, min_col = 1;

    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            if (i == j) 
            {
                sum += matrix[i][j];
            }
            if (matrix[i][j] > max) 
            {
                max = matrix[i][j];
                max_row = i + 1;
                max_col = j + 1;
            }
            if (matrix[i][j] < min) 
            {
                min = matrix[i][j];
                min_row = i + 1;
                min_col = j + 1;
            }
        }
    }
    sum-=1;
    printf("对角线元素之和：%d\n", sum);
    printf("矩阵中元素的最大值：%d (在第%d行第%d列)\n", max, max_row, max_col);
    printf("矩阵中元素的最小值：%d (在第%d行第%d列)\n", min, min_row, min_col);
    return 0;
}