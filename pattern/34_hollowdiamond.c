#include<stdio.h>
int i,j;
int main(){
    for(i=1;i<=5;i++){
        //space
        for(j=5-i;j>0;j--){
            printf(" ");
        }//star
        for(j=1;j<=1;j++)
        printf("*");
        //space
        for(j=1;j<i;j++)
        printf("  ");
        //star
        for(j=i;j<=i;j++){
            if(i==1)
            printf("");
            else
        printf("*");
        printf("\n");
    }
}
//lower part
for(int i=1;i<=4;i++){
    for(j=4-i;j>0;j--)
    printf(" ");
    for(j=1;j<=1;j++)
    printf("*");
    for(j=1;j<=i;j++)
    printf("  ");
    for(j=1;j<=1;j++)
    printf("*");
    printf("\n");
}

}