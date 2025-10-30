/*
name: gitari achily wamucii
reg no: CT101/G/26452/25
description: program to show occupied rooms
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10];
    int branch, floor, room;
    int totalOccupied = 0;

    srand(time(0));

    for(branch = 0; branch < 3; branch++) {
        printf("Branch %d:\n", branch + 1);
        
        for(floor = 0; floor < 5; floor++) {
            printf("  Floor %d: ", floor + 1);
            
            for(room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;
                printf("%d ", chain[branch][floor][room]);
                
                if(chain[branch][floor][room] == 1)
                    totalOccupied++;
            }
            printf("\n");
        }
        printf("\n");
    }

    printf("Total Occupied Rooms Across All Branches: %d\n", totalOccupied);

    return 0;
    }