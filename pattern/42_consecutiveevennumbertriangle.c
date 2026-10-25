#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=2*i;j++){
            if(j%2==1) continue;
            else
            printf("%d ",j);
        }
        printf("\n");
    }
}