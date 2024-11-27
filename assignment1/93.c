#include<stdio.h>
int main()
{
    char *ptr;
    char str[200];
    int count=0;
    printf("enter the sentence \n");
    gets(str);

    ptr=str;

    while(*ptr!='\0')
    {
        if(*ptr==' ')
        {
            count++;
        }
        ptr++;
    }
    printf("%d",count+1);

}
