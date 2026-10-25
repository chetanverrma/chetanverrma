#include<stdio.h>
int i,j;
int main(){
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j==i||j==6-i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}