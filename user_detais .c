#include<stdio.h>
int main()
{
    int age;
    char name[50];
    
    printf("enter name:");
    scanf("%s",&name);
    
    printf("enter age:");
    scanf("%d",&age);
    
    printf("\n----user details ----\n");
    printf("name:%s\n",name);
    printf("age:%d\n",age);

    return 0;
}
