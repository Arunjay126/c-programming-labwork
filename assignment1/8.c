#include<stdio.h>
int main(){
    int day,hour,minute;
    int seconds;
    seconds = 31558150;
    minute = seconds/60;
    hour = minute/60;
    day = hour/24;
    printf("%d seconds, %d minute,%d hour,%d days",seconds,minute,hour,day);
    
}
