/*
name:gitari achily wamucii
reg no:CT/101/G/26452/25
description:ptogram to calculate fare
*/
#include <stdio.h>

	float calculatefare(float distance){
	 return 50*distance;
	}
	int main() {
		float distance;
		float fare;
		
	printf("enter distance in km: ");
	scanf("%f",&distance);

	fare=calculatefare(distance);
	
	printf("fare = %.2f KES\n", fare);
	
	return 0;
}