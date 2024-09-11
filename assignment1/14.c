#include<stdio.h>
int main(){
    char c;
    printf("enter a character");
    scanf("%c",&c);
    if  (c>=65 && c<=90){
        printf("CAPITAL LETTERS");
    }
    else if (c>=97 && c<=122){
        printf("SMALL LETTER CASE");
    }
    else if (c<=57 && c>=48){
        printf("DIGITS");
    }
    else {
        printf("special sympol");
    }
}
