#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        if(i%2!=0){
            for(int j=5*i-4;j<=5*i;j++){
                printf("%d ",j);
            }
            printf("\n");
        }
        else{
            for(int j=5*i;j>5*i-5;j--)
                printf("%d ",j);
                printf("\n");
           }
    }    
}