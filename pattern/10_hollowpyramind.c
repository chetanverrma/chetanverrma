#include<stdio.h>
int main(){
    for(int i = 1;i<=5;i++){   
        //space    
        for(int j=1;j<=5-i+1;j++){
            printf(" ");             
        }
        for(int j=1;j<=2*i-1;j++){
            if(i==1||j==1||i==5 ||j==2*i-1)
            printf("*");
            else
            printf(" ");
        }
        
        
        printf("\n");
    }
}