#include<stdio.h>
int main(){
    int a[10],b[10],c[10];
    printf("enter 10 numbers: ");
    for(int i = 0;i<10;i++){
        scanf("%d",&a[i]);
    }
    printf("enter 10 numbers: ");
    for(int i = 0;i<10;i++){
        scanf("%d",&b[i]);
    }
    for(int i = 0;i<10;i++){
        c[i] = a[i]+b[i];
        printf("%d ",c[i]);
    }
}
