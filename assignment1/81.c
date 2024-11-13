#include<stdio.h>
int pri(int a){
    int p = 0;
    for (int x = 2;x<a;x++){
        if (a%x == 0){
            p = 1;
        }
    }
    if (p == 0){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int a;
    printf("enter the number: ");
    scanf("%d",&a);
    printf("%d",pri(a));
}
