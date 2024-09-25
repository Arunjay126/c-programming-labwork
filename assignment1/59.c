#include<stdio.h>
int main(){
    int a[10],b[10],x;
    printf("enter the values for first array: ");
    for(int i = 0;i<10;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the values for second array: ");
    for(int i = 0;i<10;i++){
        scanf("%d",&b[i]);
    }
    for(int i = 0;i<10;i++){
        x = a[i];
        a[i] = b[i];
        b[i] = x;
        printf("first matrix: %d second matrix %d",a[i],b[i]);
    }
}
