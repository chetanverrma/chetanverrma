#include<stdio.h>
int main(){
    for(int i = 1;i<=5;i++){
        //space
        for(int j=1;j<=5-i;j++)
        printf(" ");
        //decreasing number
        for(int j=i;j>=1;j--)
        printf("%d ",j);   
        //increasing number    
        for(int j=2;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}