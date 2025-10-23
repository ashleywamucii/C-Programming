/*
name:Gitari Achily Wamucii
reg no:CT101/G/26452/25
description:calculateElectricBill
*/
#include<stdio.h>
int main()
{
	int units;
	float bill;
	
	printf("enter number of units consumed :");
	scanf("%d",&units);
	
	if(units<=100){
		bill=units*10;}
		
		else
		if(units<=200){
			bill=100*10+((units-100)*15);
		}
		else
			if(units>200){
				bill=100*10+100*15+((units-200)*20);
			}
			
printf("bill=%.2fKES",bill);
return 0;
	
}
