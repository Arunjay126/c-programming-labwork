#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    c = a;
    a = b;
    b = c;
    printf("a is %d, b is %d",a,b);
}
