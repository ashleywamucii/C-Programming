/*
name:achily wamucii gitari
reg no:CT101/G/26452/25
description :program to check student eligibility for exams
*/
#include<stdio.h>
int main()
{

int attendance_ratio;
float average_marks ;

printf("enter students attendance_ratio : ");
scanf("%d",&attendance_ratio);

printf("enter students average_marks : ");
scanf("%f",&average_marks);

if(attendance_ratio >=0.75 && average_marks>=40)
{
printf("eligible");
}
else
{
printf("not eligible");
}
return 0;
} 