/* Write a program to print first ‘n’ natural number using do-while loop.*/

#include<stdio.h>

int main(){
    int n;int i=0;
    scanf("%d",&n);
    do{
        printf("%d\n",i);
        i++;
    } while (i <= n);
    
    return 0;
}