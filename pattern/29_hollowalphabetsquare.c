#include<stdio.h>
int main(){
    for(int i = 1; i<=5;i++){
        for(char j='A';j<'A'+5;j++){
        if(i==1||i==5||j=='A'||j=='E')
        printf("%c",j);
        else
        printf(" ");
        }
        printf("\n");
    }  
}