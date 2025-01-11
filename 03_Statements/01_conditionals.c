#include<stdio.h>

int main(){
    int age=15;
    if(age>10){
        printf("we are inside if\n");
        printf("Your age is greater than 10\n");
    }
    if(age%5==0){
        printf("we are another inside if\n");
        printf("Your age is divisible by 50\n");
    }
    return 0;
}