#include<stdio.h>
#include<stdlib.h>
int main(){
    int a = 0,x = 0,t= 0;
    a = rand() % (100 + 1);
    while(x!=a){
        printf("enter your guessed number:\n");
        scanf("%d",&x);
        if (x ==a){
            printf("you entered correct value\n");
            t++;
            break;
        }
        else{
            if (x>a){
                printf("lower number \n");
                t++;
            }
            else if (x<a){
                printf("higher number\n");
                t++;
            }
        }
        
    }
    printf("you took %d turns\n",t);
    
}
