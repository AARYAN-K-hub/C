#include<stdio.h>

int main(){
    char i='A';//pointer to character
    char* j =&i;

    float k=5.432;//pointer to float
    float* k1=&k;

    printf("the value at address of j is %d\n", *&i);
    printf("the value at address of k is %f̃̃\n", *&k);
    return 0;
}