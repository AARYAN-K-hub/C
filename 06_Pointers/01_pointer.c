#include<stdio.h>

int main(){
    int i=72;
    int* j=&i;
    int k=67;
    printf("the address of i is %p\n", &i);
    printf("the address of j is %p\n", j);
    printf("the address of k is %p\n", &k);

    printf("the value at address of j is %d\n", *&i);
    return 0;
}