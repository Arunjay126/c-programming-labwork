#include<stdio.h>
int chk(int a){
    if (a%2 == 0){
        return 0;
    }
    else{
        return 1;
    }

}
int main(){
    int a;
    printf("enter a number");
    scanf("%d",&a);
    if (chk(a)== 0){
        printf("it is a even number");
    }
    else{
        printf("it is a odd number");
    }
    
}
