#include<stdio.h>
int main(){
    for(int i = 1; i<=5;i++){
        for(char j='A';j<'A'+i;j++)
        printf("%c",j);
        printf("\n");
    }  
}