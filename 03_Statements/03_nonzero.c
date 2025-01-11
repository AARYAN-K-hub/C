#include<stdio.h>

int main(){
    if(1){
        printf("This if is executed\n");
    }
    if(2345){
        printf("This if is also executed\n");
    }
    if(2.74){
        printf("This if is also executed\n");
    }
    if('c'){
        printf("this is also executed\n");
    }
    if(0){
        printf("This is also executed\n");
    }
    return 0;
}