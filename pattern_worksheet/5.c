#include<stdio.h>
int main(){
    char a = 'A';
    int b = 4;
    for(int x = 1;x<=b;x++){
        for(int y = 1;y<=x;y++){
            printf("%c ",a);
            a+=1;
        }
        printf("\n");
    }
}
