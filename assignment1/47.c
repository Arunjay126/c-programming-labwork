#include<stdio.h>
int main(){
    int a = 5;
    for (int x = 1; x<=a;x++){
        for (int y = 0;y<x;y++){
            printf("%c",'A'+y);
        }
        printf("\n");
    }
}
