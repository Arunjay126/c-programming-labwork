#include<stdio.h>
int main(){
    int a = 5;
    char b = 'A';
    for (int x = 1;x<=a;x++){
        for(int y = 1;y<=x;y++){
            printf("%c",b);
        }
        printf("\n");
        b+=1;
    }
}
