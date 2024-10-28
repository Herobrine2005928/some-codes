#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,det,x1,x2,d,e;
   printf("请输入a,b,c的值：");
	scanf("%lf%lf%lf",&a,&b,&c);
	det=b*b-4*a*c;
	d=-b/(2.0*a);
	e=sqrt(det)/(2.0*a);
	x1=d+e;
	x2=d-e;
	if(det<0)
	    printf("这个方程没有实数根\n");
	else if(det==0)
		printf("这个方程只有一个实数根为：%.2f\n",x1);
	else
		printf("这个方程的两个实数根为：%.2f,%.2f\n",x1,x2);
	return 0;
}