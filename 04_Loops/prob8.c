/*Write a program to calculate the factorial of a given number using a for loop.*/

#include<stdio.h>

int main(){

    // 8!=1*2*3*4*5*6*7*8
    // 5!=1*2*3*4*5
    int product=1;
    int n=0;
    for(int i=1;i<=n;i++){
        product *=i;
    }
    printf("The product is %d", product);
    return 0;
}