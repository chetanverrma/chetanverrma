#include<stdio.h>
int i,j;
int main(){
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("%dx%d=%d ",i,j,i*j);
        }
        printf("\n");
    }
}