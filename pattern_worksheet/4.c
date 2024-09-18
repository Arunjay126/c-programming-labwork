#include<stdio.h>
int main(){
    int a = 4,b = 1;
    for(int x = 1;x<=a;x++){
        for(int y = 1;y<=x;y++){
            printf("%d ",b);
            b+=1;
        }
        printf("\n");
        
    }
}
