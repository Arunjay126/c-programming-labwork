#include<stdio.h>
int main(){
    int f;
    float c;
    printf("enter the temperature in Fahrenheit");
    scanf("%d",&f);
    c = ((f-32)*5)/9;
    printf("%d is the temperature in celcius",c);
}