 #include<stdio.h>
 int main(){
    for(int i =1;i<=5;i++){
        for(int j=1;j<=i-1;j++)
        printf(" ");
        for(int j=1;j<=11-2*i;j++)
        printf("*");
        printf("\n");}
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4-i;j++)
        printf(" ");
        for(int j=1;j<=1+2*i;j++)
        printf("*");
        printf("\n");
    }
 } 
