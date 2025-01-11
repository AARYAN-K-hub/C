/*  Calculate the area of a circle and modify the same program to calculate the
    volume of a cylinder given its radius and height.*/
#include <stdio.h>

int main()
{
    int r = 6;
    int height = 10;
    printf("The area of circle is %d is %.2f\n", r, 3.14 * r * r);
    printf("volume of cylinder with radius %d and height %d is %.2f\n", r, height, 3.14 * r * r * height);
    return 0;
}