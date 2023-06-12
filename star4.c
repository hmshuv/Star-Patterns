#include<stdio.h>

int main(){
    for(int i=0; i<=5; i++){
        for(int x=1; x<=i; x++){
            printf(" ");
        }
        
        for(int j=1; j<=(5-i); j++){
            printf("*");

        }
        printf("\n");

    }
    return 0;
}