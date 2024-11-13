#include<stdio.h>
#include<math.h>
int arm(int a){
    int b,c = 10,d = 1,e = 10,f = 0;
    b = a;
    while(b/c>=1){
        c*=10;
        d++;
    }
    for (int x = 1;x <= d;x++){
        f+=pow((b%e),d);
        b=b/10;
    }
    if (a == f){
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
    if (arm(a) == 0){
        printf("it is an armstrong number");
        
    }
    else{
        printf("it is not an armstrong number");
    }
}
