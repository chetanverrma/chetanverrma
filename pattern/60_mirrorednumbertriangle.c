#include<stdio.h>
int i,j;
int main(){
    for(i=1;i<=5;i++){
        for(j=5-i;j>0;j--){
            printf(" ");
        }
        for(j=i;j>0;j--)
        printf("%d ",j);
        printf("\n");
    }
}