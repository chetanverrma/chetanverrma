#include <stdio.h>
int main (){
    int n;
    printf("enter a your no. : ");
    scanf("%d",&n);
    int sum = 0;
    while (n!=0){
        int x = n%10;
        if (x%2==0){
            sum = sum +x;}
        n=n/10;
    }
    printf("the sum of digits are : %d",sum);
    return 0 ;

}