#include<stdio.h>
int main(){
    int a = 4;
    char b = 'Z';
    for(int x = 1;x<=a;x++){
        for(int y = 1;y<=4-x;y++){
            printf(" ");
        }
        for(int y = 1;y<=x;y++){
            printf("%c ",b);
            b-=1;
        }
        printf("\n");
    }
}
