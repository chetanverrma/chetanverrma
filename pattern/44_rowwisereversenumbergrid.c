#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int j=5*i;j>5*i-5;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
}