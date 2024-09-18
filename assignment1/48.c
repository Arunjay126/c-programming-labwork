#include<stdio.h>
int main(){
    int a = 5;
    for(int x = 1;x<=a;x++){
        for (int y = 1;y<=a- x;y++){
            printf(" ");
        }
        for(int y = 1;y<=x;y++){
            printf("%d",y);
        }
        printf("\n");
        
    }
}
