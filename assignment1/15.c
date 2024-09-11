#include<stdio.h>
int main(){
    int a,b,c,d,e,t;
    printf("enter the marks of student: ");
    scanf("%d%d%d%d%d",&t,&b,&c,&d,&e);
    a = (t+b+c+d+e)/500;
    if(a>90 && a<=100){
        printf("A");
    }
    else if (a>80 && a<=90){
        printf("B");
    }
    else if (a>70 && a<=80){
        printf("C");
    }
    else if (a>60 && a<=70){
        printf("D");
    }
    else if (a>=50 && a<=60){
        printf("E");
    }
    else{
        printf("F");
    }
}
