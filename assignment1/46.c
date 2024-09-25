#include<stdio.h>
int main(){
    int input,x,y;
    float size;
    printf("enter the size of your head: ");
    scanf("%d",&input);
    size = input/3.14;
    x = size;
    y = (size-x)/(1/8.0);
    printf("the size is %d %d/8",x,y+1);
    
}
