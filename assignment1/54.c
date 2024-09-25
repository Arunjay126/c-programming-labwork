#include<stdio.h>
int main(){
    int a[10],sum = 0;
    printf("enter the 10 numbers: ");
    for(int i = 0;i <10;i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0;i<10;i++){
        sum+=a[i];
    }
    printf("%d",sum);
}
