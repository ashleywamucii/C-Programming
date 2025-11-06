/*
NAME: Gitari achily wamucii
reg no: CT101/G/26452/25
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    float amount, total = 0.0;

    // Open file for reading
    fp = fopen("sales.txt", "r");
    if (fp == NULL) {
        printf("Error opening sales.txt\n");
        exit(1);
    }

    // Read all transaction amounts and compute total
    while (fscanf(fp, "%f", &amount) == 1) {
        total += amount;
    }

    fclose(fp);  // Always close file
    printf("Total sales for the day: %.2f\n", total);

    return 0;
}