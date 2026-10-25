#include <stdio.h>
int main(){
    int x=4,y=0,z=0;
    while(x>=0){
        if(x==y)
            break;
        else 
            printf("\n%d%d%d",x,y,z);
            x--;
            y++;
                   
    }
    return 0;

}