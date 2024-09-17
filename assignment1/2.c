#include<stdio.h>
int main(){
    int a,b,c,d,e,t,p;
    printf("enter marks of 5 subjects");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    t = a+b+c+d+e;
    p = (t*100)/500;
    printf("%d is the total ammount \n %d is the percentage",t,p);
}
