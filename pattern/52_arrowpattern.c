#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++)          
            printf(" ");
        for(int j=1;j<=i;j++)
            printf(" *");       
        printf("\n");
    }
    for(int i =1;i<=3;i++){
        for(int j=1;j<=2;j++)
        printf("  ");
        for(int j=3;j<=3;j++){
            printf(" *");
        
       
        }
         printf("\n");
    }
}