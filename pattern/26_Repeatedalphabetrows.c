#include<stdio.h>
int main(){
    for(char i = 'A';i<='E';i++){  
        //alphabet A=65
        for(int j=1;j<=i-64;j++){
            printf("%c ",i);
        }
        printf("\n");
    }
}