#include<stdio.h>
int main(){
    int a,b,c = 1;
    printf("enter base and exponent");
    scanf("%d%d",&a,&b);
    while (b!=0){
        c = c*a;
        b--;
    }
    printf("the result is %d",c);
}
