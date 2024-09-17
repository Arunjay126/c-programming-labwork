#include<stdio.h>
int main(){
    int a,p = 0;
    printf("enter the number: ");
    scanf("%d",&a);
    for (int x = 2;x<a;x++){
        if (a%x == 0){
            p = 1;
        }
    }
    if (p == 0){
        printf("its a prime number");
    }
    else{
        printf("its a composite number");
    }
}
