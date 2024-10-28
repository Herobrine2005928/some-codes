#include<stdio.h>

int main()
{
     float a, b, c;
     int i,j,temp;
     printf("enter a b c\n");
     scanf("%f %f %f", &a, &b, &c);
     float x[3] = {a, b, c};
     for (i = 0; i < 2; i++)
             for (j = 0 ; j <2-i; j++)
             {
                 if (x[j] > x[j + 1])
                 {
                      temp = x[j];
                      x[j] = x[j + 1];
                      x[j + 1] = temp;
                 }
             }
     for (i = 0; i < 3; i++)
             printf("%f ", x[i]);

     return 0;
}