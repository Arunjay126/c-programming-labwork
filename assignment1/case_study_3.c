#include<stdio.h>
int main()
{
    int num,digit,org,a=0;
    printf("enter a number ");
    scanf("%d",&num);

    org=num;

    while(num>0)
    {
        digit=num%10;
        if(digit==0)
        {
            
        }
        else if(org%digit==0)
        {
            a=a+1;
        }
        num=num/10;
        

    }
    printf("%d",a);
   
    return 0;
}
