
#include<stdio.h>
int main(){
    int a;
    printf("enter the total number to be shown: ");
    scanf("%d",&a);
    for(int x = 1;x<=a;x++){
        printf("%d ",2*x - 1);
    }
}
