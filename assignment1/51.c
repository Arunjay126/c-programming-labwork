#include<stdio.h>
int main(){
    int a = 10000;
    for(int x = 1;x<=5;x++){
        for(int y = 1;y<=x-1;y++){
            printf("0");
        }
        printf("%d",a);
        a/=10;
        printf("\n");
    }
}
