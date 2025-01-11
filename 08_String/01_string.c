#include <stdio.h>

int main(){
    char st[]={'a','b','c','/0'};

    for(int i=0;i<3;i++){
        printf("Character is %c \n", st[i]);
        
    }
    // printf("First Character is %c \n",st[0]);
    
    return 0;
}