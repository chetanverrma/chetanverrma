#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i==1||j==1||i==5||j==5)
            printf("1 ");
            else if(i==3 && j==3)
            printf("3 ");
            else
            printf("2 ");
        }
        printf("\n");
    }
}