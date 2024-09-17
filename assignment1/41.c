#include<stdio.h>
int main(){
    int a;
    printf("enter the number: ");
    scanf("%d",&a);
    for (int x = 1;x<=a;x++){
        if (a%x == 0){
            printf("%d ",x);
        }
    }
}
