#include<stdio.h>
 struct Student
 {  
	 int num;
	 char name[10];
	 float score;
	 float average;
}stu[6];
int main()
 {
	struct Student stu1;
	int i,j;
	float average;
    printf("请输入六位学生的学号 姓名 成绩\n");
	for(i=0;i<6;i++)
	  scanf("%d %s %f",&stu[i].num,&stu[i].name,&stu[i].score);
	for(i=0;i<5;i++)
	{
		for(j=0;j<5-i;j++)
		{
			if(stu[j].score<stu[j+1].score)
			{
				stu1=stu[j];
				stu[j]=stu[j+1];
				stu[j+1]=stu1;
			}

		}
	}
	for(i=0;i<6;i++)
		printf("%d %s %.2f\n",stu[i].num,stu[i].name,stu[i].score);
	average=(stu[1].score+stu[2].score+stu[3].score+stu[4].score+stu[5].score+stu[0].score)/6;
	printf("这六人平均数为:%.2f\n",average);
	return 0;
}