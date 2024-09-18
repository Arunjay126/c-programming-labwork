#include<stdio.h>
int main(){
    int a;
    printf("enter the number of rows: ");
    scanf("%d",&a);
    for (int x = 1; x<=a;x++){
        for (int y = 0;y<x;y++){
            printf("%c",'A'+y);
        }
        printf("\n");
    }
}
