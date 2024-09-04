#include<stdio.h>
void main(){
    int seconds,hours,minute;
    scanf("%d",&seconds);
    minute = seconds/60;
    hours = minute/60;
    minute = minute - hours*60;
    seconds = seconds - hours*60*60 - minute*60;
    printf("hours: %d, minutes: %d, seconds: %d",hours,minute,seconds);
    
}
