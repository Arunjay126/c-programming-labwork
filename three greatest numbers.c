#include <stdio.h>
int main() {
    int a,b,c;
    printf("enter 3 numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b){
        if (a>c){
            printf("%d is biggest",a);
        }
        else {
            printf("%d is biggest",c);
        }
    }
    else {
        if (b>c){
            printf("%d is biggest",b);
        }
        else {
            printf("%d is biggest",c);
        }
    }

}
