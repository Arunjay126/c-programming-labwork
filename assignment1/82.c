#include<stdio.h>
int fact(int a){
    int b = 1;
    for(int i = 1;i<=a;i++){
        b*=i;
    }
    return b;
}
int main(){
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
    printf("%d",fact(a));
}
