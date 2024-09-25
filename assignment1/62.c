#include<stdio.h>
int main(){
    int i;
    printf("enter the length of array: ");
    scanf("%d",&i);
    int a[i],b[i];
    printf("enter the values of array: \n");
    for(int j = 0;j<i;j++){
        scanf("%d",&a[j]);
    }
    for(int j = 0;j<i;j++){
        b[j] = a[i-j-1];
        printf("%d",b[j]);
    }
}
