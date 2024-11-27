#include<stdio.h>
int main ()
{
    char str[200];
    char *ptr;
    int lgt,i=0;
    printf("enter: ");
    gets(str);
    ptr=str;

    printf("%s",str);

    while(*ptr!='\0')
    {
        lgt++;
        ptr++;
    
    }

     printf("\n%d",lgt);

}
