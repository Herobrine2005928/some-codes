#include<stdio.h>
int main()
{
    int startyr,stopyr,temp;
    printf("plaese enter startyear\n");
    scanf("%d",&startyr);
    printf("plaese enter stopyear\n");
    scanf("%d",&stopyr);
    for(temp = startyr;temp <= stopyr;temp ++)
    {
        if(temp % 4 == 0 && temp % 100 != 0)
        {
            printf("%d is a leap year\n",temp);
        }
        
        else if(temp % 400 == 0)
        {
            printf("%d is a leap year\n",temp);
        }
        
        else
            printf("%d is not a leap year\n",temp);
    }
    return 0;
}