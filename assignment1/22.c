#include<stdio.h>
int main(){
    int a,b;
    b = 0;
    printf("enter a number for factorial");
    scanf("%d",&a);
    while(a>1){
        b=b*a;
        a = a-1;
    }
    printf("the factorial is %d",b);
}
