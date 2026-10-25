
#include<stdio.h>
int main(){
    int marks[5],i,result;
    printf("Input marks\n");
    for(i=0;i<5;i++){
        scanf("%d",&marks[i]);
    }
    int min = marks[0];
    printf("minimum marks\n");
    for(i=4;i>=0;i--){
        if(min>marks[i])
            min = marks[i];
    }
 printf("%d",min);
}

