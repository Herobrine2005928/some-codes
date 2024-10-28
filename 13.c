#include<stdio.h>
int main()
{
    float a,b,c;
    char p;
    printf("please enter a (any operator) b\n");
    scanf("%f %c %f",&a,&p,&b);
    switch(p)
    {
        case '+':  
            c=a+b;
            break;  
        case '-':  
            c=a-b;
            break;  
        case '*':  
            c=a*b;  
            break;
        default:  
            printf("error\n");  
            return 0;
    } 
    printf("%f",c);
}