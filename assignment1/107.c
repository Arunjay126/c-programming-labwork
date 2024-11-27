#include<stdio.h>
#include<math.h>
int flip(int,int);
int main()
{
    int num,n;
    printf("enter the number :");
    scanf("%d",&num);

    printf("enter the value of N :");
    scanf("%d",&n);

  
    printf("after operation the number is %d",  flip(num,n));
}

int flip(int number,int n)
{

    int lastdgt ,org,div;
    div=pow(10,n);
    org=number/div;
    lastdgt=number%div;

    int reverse=0;


    while(lastdgt>0)
    {
        reverse=reverse*10+(lastdgt%10);
        lastdgt/=10;
    }

    return org*div+reverse;
}
