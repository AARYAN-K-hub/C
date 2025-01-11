/*Write a program to determine whether a character entered by the user is lowercase or not.*/

#include<stdio.h>

int main(){
    char ch='a';
    printf("The character is %c\n",ch);
    printf("The value id character is %d\n",ch);

    if(ch>97 && ch<=122){
        printf("This character is lowercase\n");
    }
    else{
        printf("This character is not a lower case\n");
    }
    return 0;
}