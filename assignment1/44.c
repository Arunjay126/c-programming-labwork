
#include<stdio.h>
int main(){
    float a;
    printf("enter the total consumption in unit: ");
    scanf("%f",&a);
    if (a>600){
        printf("%f",425+(a-600)*1.25);
    }
    else if ((a>400)&&(a<=600)){
        printf("%f",230+0.8*(a-400));
    }
    else if ((a>200)&&(a<=400)){
        printf("%f",100+0.65*(a-200));
    }
    else{
        printf("%f",a/2);
    }
}
