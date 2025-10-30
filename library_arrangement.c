/*
name: gitari achily wamucii
reg no: CT101/G/26452/25
descriptin: program to show library arrangement
*/

#include <stdio.h>

int main() {

    // 2 floors, 3 shelves each, 4 books per shelf
    int library[2][3][4] = {
        {   // Floor 0
            {101, 102, 103, 104},   // Shelf 0
            {105, 106, 107, 108},   // Shelf 1
            {109, 110, 111, 112}    // Shelf 2
        },
        {   // Floor 1
            {201, 202, 203, 204},   // Shelf 0
            {205, 206, 207, 208},   // Shelf 1
            {209, 210, 211, 212}    // Shelf 2
        }
    };

    int i, j, k;

    for (i = 0; i < 2; i++) {
        printf("=== Floor %d ===\n", i);
        for (j = 0; j < 3; j++) {
            printf(" Shelf %d: ", j);
            for (k = 0; k < 4; k++) {
                printf("%d ", library[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}