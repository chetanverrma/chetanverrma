#include<stdio.h>
int main(){
    for(int i = 1;i<=5;i++){
        //space
        for(int j=1;j<=5-i;j++){
            printf(" ");
        }
        //stars
        for(int j=1;j<=i;j++){
            printf(" %d ",j);
        }
        printf("\n");
    }
}