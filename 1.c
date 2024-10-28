#include <stdio.h>
 
int main()
{
	float a,b,c,max;
	printf("这是一个求三个数最大值的程序。\n");
	printf("第一个数=");
	scanf("%f",&a);
	printf("第二个数=");
	scanf("%f",&b);
	printf("第三个数=");
	scanf("%f",&c);
	if(a>b&&a>c)
		max=a;
	else if(b>a&&b>c)
		max=b;
	else
		max=c;	
    printf("最大值是 %f\n",max);
    return 0;
}