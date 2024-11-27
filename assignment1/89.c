#include<stdio.h>
int main ()
{
    int arr1[5];
    int arr2[5];
    int *ptr;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr1[i]);
    }
    ptr=arr1;
    printf("after storing values in another array\n ");

    for(int i=4;i>=0;i--)
    {
        arr2[i]=*ptr;
        ptr++;
    }

     for(int i=0;i<5;i++)
    {
        printf("%d\n",arr2[i]);
    }
    

}
