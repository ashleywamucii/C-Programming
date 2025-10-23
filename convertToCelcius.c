/*
name:gitari achily wamucii
reg no:CT101/G/26452/25
description:program to convert to celcius
*/

#include<stdio.h>

float tocelcius(float fahrenheit){
	float celcius;
	celcius=(fahrenheit-32)*5/9;
	return celcius;
}

int main(){
	float fahrenheit,celcius;
	
	printf("enter temperature in fahrenheit :");
	scanf("%f",&fahrenheit);
	
	celcius=tocelcius(fahrenheit);
	
	printf("temperature in celcius  :%.2fC\n",celcius);
	
	return 0;
}