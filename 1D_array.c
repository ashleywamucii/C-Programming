/*
name: gitari achily wamucii
reg no:CT101/G/26452/25
description:program to track weekly revenue
*/

#include<stdio.h>
int main()
{
	int i;
	float revenue,weekly_revenue, averange_revenue;
	
	for(i=0;i<7;i++) {
		printf("enter revenue for day %d: ", i+1);
		scanf("%f",&revenue);
		 weekly_revenue+=revenue;
	}
		 
		 averange_revenue= weekly_revenue / 7;
		 
		 printf("weekly revenue is: ksh %.2f \n",weekly_revenue);
		 printf("averange revenue is: ksh %2f \n",averange_revenue);
		 
		 return 0;
		
	}
	
