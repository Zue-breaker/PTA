//Solution 1:We define a struct including the name、school ID and grade of a student. Then compare to get max and min. 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//Define a struct
typedef struct Student
{
	char name[11];
	char number[11];
	int grade;
}Stu;

int main()
{
	int n;
	scanf("%d",&n);
	Stu student[n];
	int max,min;
	int max_Stu = 0,min_Stu = 0;
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%s %s %d",&student[i].name,&student[i].number,&student[i].grade);
	}
	//遍历一遍找最大和最小并记录
	max = student[0].grade, min = student[0].grade;
	for(i=0;i<n;i++)
	{
		if(student[i].grade > max)
		{
			max_Stu = i;
			max = student[i].grade;
		}
		if(student[i].grade < min)
		{
			min_Stu = i;
			min = student[i].grade;
		}
	 } 
	 printf("%s %s\n",student[max_Stu].name,student[max_Stu].number);
	 printf("%s %s",student[min_Stu].name,student[min_Stu].number);
	 return 0;
 } 
