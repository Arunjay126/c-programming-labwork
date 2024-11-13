#include<stdio.h>
int fibo(int a){
    int x = 0,y = 1;
    for (int z = 1;z<=a/2+1;z++){
        printf("%d %d ",x,y);
        x = x+y;
        y = y+x;
        
    }
}
int main(){
    int a;
    printf("enter the number of times you want to have series: ");
    scanf("%d",&a);
    fibo(a);
}
