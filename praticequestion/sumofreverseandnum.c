#include <stdio.h>
int main (){
    int n;
    printf("enter a your no. : ");
    scanf("%d",&n);
    int org,r = 0;
    org=n;
    while (n!=0){
        int x = n%10;
        r=r*10;
        r=r+x;
        n=n/10;
    }
    int sum = org+r;
    printf("the reverse of digits are : %d",r);
    printf("\nthe sum of reverse and num are : %d",sum);
    return 0 ;

}