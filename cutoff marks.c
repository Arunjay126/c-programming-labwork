#include<stdio.h>
int main(){
    int m,p,c,e,cm;
    printf("enter maths(out of 200),physics(out of 200),chemistry(out of 200),entrance examination(out of 100)");
    scanf("%d%d%d%d",&m,&p,&c,&e);
    cm = m/2+p/2+c/2+e;
    printf("cm is %d",cm);
}