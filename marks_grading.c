/*
name: gitari achily wamucii
reg no: CT101/G/26452/25
description: program to calculate marks and grade marks
*/

#include <stdio.h>
int main(){
	int i;
	float marks,averange_marks,total_marks;
	int grade;
	
	for(i=0;i<8;i++){
		// subject 1. maths, 2.eng, 3. kisw, 4.phy, 5. bio, 6.chem,7.geo,8.comp
		printf("enter marks for subject %d: ",i+1);
		scanf("%f",&marks);
		total_marks+=marks;
	}
	
	averange_marks=total_marks/8;
	
	printf("total_marks is %f \n",total_marks);
	
	if(total_marks >700){
		printf(" grade A \n");
	}
	
	if(total_marks >=500&&total_marks<=699){
		printf("grade B \n");
	}
	
	else
	if(total_marks >=300&&total_marks<499){
		printf("grade C \n");
	}
	
	else
	if(total_marks >100&&total_marks<100){
		printf("grade D \n");
	}
	
	else
	{
		printf("FAIL \n");
	}
	
	printf("the averange marks is %f \n",averange_marks);
	
	return 0;
		
}