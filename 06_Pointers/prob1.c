/*Write a program to print the address of a variable. Use this address to get the
value of the variable.*/

#include <stdio.h>

int main(){
    int i = 2;
    int* ptr = &i;
    printf("The address of i is %u\n", &i);
    printf("The value of i is %d\n", *ptr);
    return 0;
}