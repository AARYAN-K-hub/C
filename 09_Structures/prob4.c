/*Write a program to illustrate the use of arrow operator → in C.*/

#include <stdio.h>

typedef struct c{
    int real;
    int imaginary;
} Complex;

int main(){
    Complex c = {1, 2};
    printf("The value of Complex number is %d + %di ", c.real, c.imaginary);
    return 0;
}
