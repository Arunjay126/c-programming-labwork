
#include<stdio.h>
int main(){
    int a;
    printf("enter the total sales: ");
    scanf("%d",&a);
    if (a>5000){
        printf("%d",a*12.5/100);
    }
    else if ((a>2000) && (a<=5000)){
        printf("%d",185+ 12*(a-2000)/100);
    }
    else if ((a>500)&&(a<=2000)){
        printf("%d",35+10*(a-500)/100);
    }
    else{
        printf("%d",5*a/100);
    }
    
}
