#include<stdio.h>
int main()
{
    char str[300],*ptr;
    int count=0;
    gets(str);
    ptr=str;

    while(*ptr!='\0')
    {
        if(*ptr=='a'||*ptr=='A'||*ptr=='e'||*ptr=='E'||*ptr=='i'||*ptr=='I'||*ptr=='o'||*ptr=='O'||*ptr=='u'||*ptr=='U')
        {
            count++;
        }
        else{}

        ptr++;
    }

    printf("%d",count);
}
