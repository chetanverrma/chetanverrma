
#include<stdio.h>
int main(){
    int marks[5],i;
    printf("Input marks\n");
    for(i=0;i<5;i++){
        scanf("%d",&marks[i]);
    }
    printf("marks you entered\n");
    for(i=0;i<5;i++){
        printf("%d\t",marks[i]);
    }
    return 0;

}