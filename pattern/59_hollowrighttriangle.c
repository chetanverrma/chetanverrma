#include<stdio.h>
int i,j;
int main(){
    for(i=1;i<=5;i++){
        for(j=1;j<=1;j++){
            if(i==4)
            printf("****");
            else
            printf("*");
        }
        for(j=1;j<=i-1;j++){
            if(i==4) continue;
            else
        printf(" ");
        }
        for(j=1;j<=1;j++)
        printf("*");
        printf("\n");
    }
}
