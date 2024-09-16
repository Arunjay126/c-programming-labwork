#include<stdio.h>
int main(){
    int a;
    printf("enter the number to print table: ");
    scanf("%d",&a);
    for (int x = 1;x<=10;x++){
        printf("%dX%d = %d\n",a,x,a*x);
    }
}
