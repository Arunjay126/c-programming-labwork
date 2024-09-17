#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c = 10,d = 1,e=10,f = 0;
    printf("enter the number: ");
    scanf("%d",&a);
    b = a;
    while(b/c>=1){
        c*=10;
        d++;
    }
    for (int x = 1;x <= d;x++){
        f+=b%e;
        b=b/10;
    }
    printf("%d",f);
}
