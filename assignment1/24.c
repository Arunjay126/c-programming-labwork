#include<stdio.h>
#include<math.h>
int main(){
    int n,x;
    printf("enter the values of x and n");
    scanf("%d%d",&x,&n);
    if (n == 1){
        printf("%d",1+x);
    }
    else if (n == 2){
        printf("%d",1+x/n);
        
    }
    else if (n == 3){
        printf("%d",1+pow(x,n));
    }
    else{
        printf("%d",1+n*x);
    }

}
