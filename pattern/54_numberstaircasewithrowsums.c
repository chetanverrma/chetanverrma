#include<stdio.h>
int i,j,sum=0;
int main(){
    for(i =1;j<=5;i++){
        sum=0;
        for(j=1;j<=i;j++){         
        printf("%d ",j);
        sum+=j;
        }       
        printf("  | sum=%d\n",sum);
    }
}