#include <stdio.h>
int main (){
    int n ;
    printf("eneter the n term : ");
    scanf("%d",&n);
    int sum = 0;
    for (int i=1;i<=n;i++){
    sum = sum +i;
}
    printf("the sum is : %d",sum);
    return 0;
}