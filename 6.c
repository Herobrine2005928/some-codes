#include <stdio.h>

int main()
{
     int n;
     float sum=0;
     printf("enter n\n");
     scanf("%d",&n);
     
     while (n<=100) 
     {
          if (n%2==0)      
               sum=sum-1.0/n;
          else
               sum=sum+1.0/n;
          n++;
     }
     printf("sum is %f", sum);
     return 0;
}