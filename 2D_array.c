/*
name: gitari achily wamucii
reg no: CT101/G/26452/25
description: program to show rooms occupancy
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int occupancy[5][10];
    int floor, room, occupied, vacant;

    srand(time(0)); 

    printf("Room Occupancy (1 = occupied, 0 = vacant):\n\n");

    for(floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;
        
        printf("Floor %d: ", floor + 1);
        for(room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2; 
            printf("%d ", occupancy[floor][room]);
            
            if(occupancy[floor][room] == 1)
                occupied++;
            
            else
                vacant++;
        }
        printf("\nOccupied: %d, Vacant: %d\n\n", occupied, vacant);
    }

    return 0;

}
