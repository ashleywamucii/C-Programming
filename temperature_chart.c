/*
name: gitari achily wamucii
reg no: CT101/G/26452/25
description: program to show temperatures
*/
#include <stdio.h>
int main(){
	
	int temperature[7][3]={
	{20,26,19},
	{21,23,19},
	{19,21,17},
	{22,24,20},
	{18,20,16},
	{23,25,21},
	{21,22,19}
		
	};
	
	int i,j;
	
	for(i=0;i<7;i++){
		for(j=0;j<3;j++){
			printf("temperature[%d][%d] =%d\n",i,j,temperature[i][j]);
		}
	}
	
	return 0;
	
}