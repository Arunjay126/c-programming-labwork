#include<stdio.h>
int main()

{
    char str[200],rvs[200],*ptr,*ptr2;
    int i=0,size=0;
    gets(str);
    ptr=str;

   while(*ptr!=0)
   {
    ptr++;
   }
   ptr--;



   ptr2=rvs;
   while(ptr>=str)
   {
    *ptr2=*ptr;
    ptr--;
    ptr2++;
   }
   *ptr2='\0';
   puts(rvs);

 
}
