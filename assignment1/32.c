#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c = 10,d = 1,e=10,max = 0,s_max = 0,f;
    printf("enter the number: ");
    scanf("%d",&a);
    b = a;
    while(b/c>=1){
        c*=10;
        d++;
    }
    for (int x = 1;x <= d;x++){
        f = b%e;
        if (f>=max){
            max = f;
        }
        else if (f>=s_max){
            s_max = f;
        }
        b=b/10;
    }
    printf("%d %d",max,s_max);
}
