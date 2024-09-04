
#include <stdio.h>
int main(){
    int a = 1;
    int i = 5;
    while(a<=10){
        int b;
        b = i * a;
        printf("%d\n",b);
        a++;
    }
}

#include <stdio.h>
int main(){
    int a = 1;
    int i = 5;
    do{
        printf("%d \n",a*5);
        a++;
    }
    while(a<=10);
}

#include<stdio.h>
int main(){
    int a = 5;
    int x=0;
    for(x = 1;x<=10;x++){
        printf("%d\n",x*a);
    }
}