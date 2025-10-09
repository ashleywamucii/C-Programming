/*
name:achily wamucii gitari
reg no:CT101/G/26452/25
description :program for a password system 
*/
#include <stdio.h>

int main() {
    int password;

    do {
        printf("Enter password: ");
        scanf("%d", &password);

        if (password != 1234) {
            printf("Incorrect password. Try again.\n");
        }

    } while (password != 1234);

    printf("Access granted.\n");

    return 0;
}