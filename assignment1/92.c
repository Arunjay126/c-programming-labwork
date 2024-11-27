#include<stdio.h>
int main()
{
    int size;
    printf("enter the value of N");
    scanf("%d",&size);
    int arr[size],*ptr,max;

    printf("enter the numbers\n ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    ptr=arr;
    max=*ptr;
    for(int i=0;i<size;i++)
    {
        if(*ptr>max)
        {
            max=*ptr;
        }
        ptr++;
    }
    printf("biggest value is %d",max);
}
