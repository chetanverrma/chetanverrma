#include<stdio.h>
int main(){
    for(int i = 5;i>0;i--){
        //space
        for(int j=1;j<=5-i;j++)
        printf(" ");   
        //number    
        for(int j=i;j>=1;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
}