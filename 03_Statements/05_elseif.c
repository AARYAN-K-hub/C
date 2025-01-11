#include<stdio.h>

int main(){
    int age=45;

    if(age>60){
        printf("You can drive and you are a senior citizen\n");
    }
    else if(age>18){
        printf("you can drive and you are elder\n");
    }
    else if(age>18){
        printf("you can drive\n");
    }
    else{
        printf("you cannot drive\n");
    }
    return 0;
}