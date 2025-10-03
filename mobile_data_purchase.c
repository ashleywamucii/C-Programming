/*
name:achily wamucii gitari
reg no:CT101/G/26452/25
description :program to purchase mobile bundles 
*/
#include <stdio.h>
int main() {

int choice;
 printf("Internet Bundles Menu (Prices in Ksh)\n");
 printf("1. 100MB  - 50\n");
 printf("2. 500MB  - 200\n");
 printf("3. 1GB    - 350\n");
 printf("4. 2GB    - 600\n");

 printf("Enter your choice (1-4): ");
 scanf("%d", &choice);

 switch(choice) {
 case 1:
 printf("You selected 100MB Bundle. Cost: Ksh 50\n");
 break;
 
 case 2:
 printf("You selected 500MB Bundle. Cost: Ksh 200\n");
 break;
 
 case 3:
 printf("You selected 1GB Bundle. Cost: Ksh 350\n");
 break;
 case 4:
 
 printf("You selected 2GB Bundle. Cost: Ksh 600\n");
 break;
 
 default:
 printf("Invalid choice! Please select between 1 and 4.\n");
    }

    return 0;
}
