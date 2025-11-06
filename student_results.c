/*
name: gitari achily wamucii
reg no:CT101/G/26452/25
*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    char regNo[20];
    float totalMarks;
};

int main() {
    FILE *fp;
    struct Student s;

    // Open the binary file
    fp = fopen("results.dat", "rb");
    if (fp == NULL) {
        printf("Error opening results.dat file.\n");
        exit(1);
    }

    printf("\nSTUDENT RESULTS\n");
    printf("----------------------------\n");

    // Read and display all student records
    while (fread(&s, sizeof(struct Student), 1, fp)) {
        printf("Name: %s\n", s.name);
        printf("Reg No: %s\n", s.regNo);
        printf("Total Marks: %.2f\n", s.totalMarks);
        printf("----------------------------\n");
    }

    fclose(fp);
    return 0;
}