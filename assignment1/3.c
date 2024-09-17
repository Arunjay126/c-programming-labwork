#include<stdio.h>
int main(){
    int bs,hra,oa,gs;
    printf("enter the basic salary, HRA, other allowence");
    scanf("%d%d%d",&bs,&hra,&oa);
    gs = bs+hra+oa;
    printf("%d is the gross salary",gs);
}
