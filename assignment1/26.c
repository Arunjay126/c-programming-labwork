#include<stdio.h>
int main(){
    int a,sum_e = 0,sum_o = 0;
    printf("enter the number");
    scanf("%d",&a);
    for (int x = 1;x<=a;x+=2){
        sum_o+=x;
    }
    for (int x = 2;x<=a;x+=2){
        sum_e+=x;
    }
    printf("the sum of odd numbers is %d\n",sum_o);
    printf("the sum of even numbers is %d",sum_e);
}
