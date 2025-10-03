/*
name:achily wamucii gitari
reg no:CT101/G/26452/25
description :program to offer loans
*/
#include<stdio.h>
int main()
{
    int age;
    float income;
    
    printf("enter borrowers age:");
    scanf("%d",&age);
    
    printf("enter borrowers income");
    scanf("%f",&income);
    
    if(age>=21&&income>=21000)
    {
    printf("congratulations, you qualify for the loan\n");
    }
    else
    {
    printf("unfortunately we are unable to offer you a loan at this time");
    }
    return 0;
    }
