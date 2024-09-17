#include<stdio.h>
int main(){
    int a,max = 0,min= 0,x,i;
    printf("enter the total number of numbers you want to enter: ");
    scanf("%d",&a);
    i = a;
    while(i!=0){
        printf("enter the number: ");
        scanf("%d",&x);
        if (x>=max){
            if ((i == a-1) &&(min>max) ){
                min = max;
            }
            max = x;
        }
        else if (x<=min){
            min = x;
        }
        i--;
    }
    printf("the max is %d and the min is %d",max,min);
}
