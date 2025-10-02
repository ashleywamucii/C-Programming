/*
name:achily wamucii gitari
reg no:CT101/G/26452/25
description :program to calculate water bill
*/
#include<stdio.h>
int main()

{
int units;
float bill;

printf("enter number of water units consumed : ");
scanf("%d",&units);

if (units<=30){
bill = units*20;
}

else
if (units<=60){
bill= units*25;
}

else{
bill = units*30;
}

printf("bill=%.2f KES", bill);
return 0;
}