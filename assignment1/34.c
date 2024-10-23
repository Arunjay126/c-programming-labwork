#include<stdio.h>
int main(){
    int a,x = 0,y = 1;
    printf("enter the number of times you want to have series: ");
    scanf("%d",&a);
    for (int z = 1;z<=a/2+1;z++){
        printf("%d %d ",x,y);
        x = x+y;
        y = y+x;
        
    }
    
}
