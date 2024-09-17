#include<stdio.h>
int main(){
    int p,r,t,a;
    printf("enter principle amount,rate,time");
    scanf("%d%d%d",&p,&r,&t);
    a = (p*r*t)/100;
    printf("%d is the simple interest",a);
}
