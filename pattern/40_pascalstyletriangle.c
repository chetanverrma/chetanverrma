#include<stdio.h>
int n;
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            printf(" ");
        }       
            n=1;   
            for(int j=1;j<=i;j++){       
            printf("%d ",n);
            n=n*(i-j)/(j);
        }
        printf("\n");
    }
}