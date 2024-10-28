#include<stdio.h>
#define Pi 3.14
double r,h;
int main (){
	scanf("%lf %lf",&r,&h);
	printf("圆周长：%.2lf\n",2*Pi*r);
	printf("圆面积：%.2lf\n",Pi*r*r);
	printf("圆柱表面积：%.2lf\n",2*Pi*r*r+2*Pi*r*h);
	printf("圆柱体积：%.2lf",Pi*r*r*h);
	return 0;
}