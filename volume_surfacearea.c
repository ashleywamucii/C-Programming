/*
name:achily wamucii gitari
reg no:CT101/G/26452/25
description :program to calculate volume and surface 
*/
#include <stdio.h>

#define PI 3.14159

int main() 
{
    float radius, height, volume, surface_area;

    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    volume = PI * pow(radius, 2) * height;
    surface_area = 2 * PI * radius * (radius + height);

    printf("Volume of the cylinder: %.2f cubic units\n", volume);
    printf("Surface area of the cylinder: %.2f square units\n", surface_area);

    return 0;
}
