
#include<stdio.h>
int main(){
    int a,d = 3,i = 1;
    printf("enter the total number to be shown: ");
    scanf("%d",&a);
    printf("%d ",1);
    for(int x = 1;x<a;x++){
        printf("%d ",i+d);
        i = i+d;
        d+=2;
    }
}
