
#include<stdio.h>
int total = 0;
int OnlineBill(int m[],int n){  
    int max=m[0];   
    for(int i=0;i<n;i++){
        total=total+m[i];
        if(m[i]>max){
            max=m[i];
        }       
    }
    printf("max: %d\n",max);
    printf("total: %d\n",total);
}
int main(){
    int n,m[100];
    printf("enter n:");
    scanf("%d",&n);
     printf("enter the input: ");
    for(int i=0;i<n;i++){
        scanf("%d",& m[i]);
    }
    OnlineBill(m,n);
}