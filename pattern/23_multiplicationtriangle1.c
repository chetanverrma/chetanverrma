#include<stdio.h>
int main(){
    for(int i = 1;i<=5;i++){
        //number    
        for(int j=1;j<=i;j++){
            printf("%d ",j*i);
        }
        printf("\n");
    }
}