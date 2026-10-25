#include<stdio.h>
int main(){
    for(int i = 5;i>0;i--){
        //space
        for(int j=1;j<=5-i;j++){
            printf(" ");
        }
        //stars
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
}