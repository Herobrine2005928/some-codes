#include<stdio.h>
int main()
{
    int a,b,x,y,t,r,s;
    printf("please enter two positive integers\n");

    printf("please enter a\n");
    scanf("%d",&a);

    printf("please enter b\n");
    scanf("%d",&b);

    if (b>a)
    {
        t=b;
        b=a;
        a=t;
    }

    x=a;
    y=b;

    r=x%y;
    while (y!=0)
    {
        r=x%y;
        x=y;
        y=r;
    }

    s=a*b/x;

    printf("their greatest common divisor is %d\n",x);

    printf("their least common multiple is %d\n",s);
    
    return 0;
}