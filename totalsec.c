#include<stdio.h>
int main(){
    int hour,min,sec,total;
    printf("enter hour,min,sec");
    scanf("%d%d%d",&hour,&min,&sec);
    total = hour*3600 + min*60+ sec;
    printf("total is %d",total);
}