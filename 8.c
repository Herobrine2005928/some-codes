#include<stdio.h>
#define pi 3.14159
int main(void)
{
	double L,S,A,V;//L是圆周长,S是圆面积,A是圆柱表面积,V是圆柱体积
	float r,h;
	printf("r=");
	scanf("%f",&h);
	printf("h=");
	scanf("&f",&h);
	ptintf("L=%.2f\n",L=2*pi*r);
	printf("S=%.2f\n",S=pi*r*r);
	printf("A=%.2f\n",A=pi*r*r*2+2*pi*r*h);
	printf("V=%.2f\n",V=pi*r*r*h);
	return 0;
}