#include<stdio.h>
int main(){
    for(int i = 1; i<=5;i++){
        for(int j=1;j<=5-i;j++){
        printf(" ");
        }
        for(char j='A';j<='A'+i-1;j++){
        printf(" %c",j);
        }
        printf("\n");
    }  
}