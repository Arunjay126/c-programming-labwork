#include<stdio.h>
int main(){
    int a = 7;
    for(int x = 1;x<=a/2+1;x++){
        for(int y = 1;y<=4-x;y++){
            printf(" ");
        }
        for(int y = 1;y<=2*x-1;y++){
            printf("*");
        }
        printf("\n");
    }
    for(int y = 1;y<=a/2;y++){
        for(int x = 1;x<=y;x++){
            printf(" ");
        }
        for(int x = 1;x<=7-2*y;x++){
            printf("*");
        }
        printf("\n");
    }
}
