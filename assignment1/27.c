#include<stdio.h>
int main(){
    int a,prime = 0;
    printf("enter the number to check prime: ");
    scanf("%d",&a);
    for (int x = 2;x<a;x++){
        if (a%x == 0){
            prime = 1;
            break;
        }
    }
    if (prime == 0){
        printf("the number is a prime number");
    }
    else{
        printf("the number is not a prime number");
    }
}
