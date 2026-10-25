#include<stdio.h>

int main(){
    for(int i=1;i<=5;i++){
        for(char j='A'+i-1;j>='A';j--){
            printf("%c ",j);
        }
        printf("\n");
    }
}