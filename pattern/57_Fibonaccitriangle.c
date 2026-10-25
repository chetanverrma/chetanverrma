#include<stdio.h>
int i,j;
int main(){
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            if(j==1)
            printf("0 ");
            else if(j==2 || j==3)
            printf("1 ");
            else if(j==4)
            printf("2 ");
            else
            printf("3 ");
        }
        printf("\n");
    }
}