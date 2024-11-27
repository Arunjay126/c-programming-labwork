#include<stdio.h>
int main()
{
    int num;
    int *ptr;
    printf("enter the numbers\n");
    scanf("%d",&num);

    ptr=&num;
    printf("square of a number is %d",(*ptr)*(*ptr));

return 0;
}
