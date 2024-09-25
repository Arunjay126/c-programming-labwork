#include<stdio.h>
int main(){
    int a,max = 0,s_max= 0,x;
    printf("enter the total number of numbers you want to enter: ");
    scanf("%d",&a);
    while(a!=0){
        printf("enter the number: ");
        scanf("%d",&x);
        if (x>=max){
            s_max = max;
            max = x;
        }
        else if (x>=s_max){
            s_max = x;
        }
        a--;
    }
    printf("the max is %d and the second max is %d",max,s_max);
}
