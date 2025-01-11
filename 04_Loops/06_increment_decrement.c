#include<stdio.h>

int main(){
    int i=5;
    printf("The value of i is %d\n",i);

    i=i+5;///10
    printf("The value of i is %d\n",i);
    ++i;//11
    printf("the value of i is %d\n",i++);

    // i++ prints first and then increments i(Post increment operator)
    // ++i increments first and then prints i(Post increment operator)
    return 0;
}