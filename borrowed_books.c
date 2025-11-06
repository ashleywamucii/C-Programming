/*
NAME: Gitari achily wamucii
reg no: CT101/G/26452/25
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char title[100];

    // Open file in append mode so existing records are not deleted
    fp = fopen("borrowed_books.txt", "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    printf("Enter book title to record: ");
    fgets(title, sizeof(title), stdin);

    // Write the title into the file
    fprintf(fp, "%s", title);

    fclose(fp);

    printf("Book title successfully stored in borrowed_books.txt\n");

    return 0;
}