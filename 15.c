#include<stdio.h>
int main()
{
	int x,y,z,num=1;
	for(x=0;x<=20;x++)
	   for(y=0;y<=33;y++)
	    	for(z=3;z<99;z++)   	
				if(x*5+y*3+z/3==100&&z%3==0&&x+y+z==100)
					printf("combination %d:\n cock=%d\tten=%d\tchick=%d\n",num++,x,y,z);
				else 
					continue;
	return 0;
}