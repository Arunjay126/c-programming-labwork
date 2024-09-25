#include<stdio.h>
int main(){
    int a[10],even=0,odd=0;
    printf("enter 10 numbers: ");
    for(int i = 0;i<10;i++){
        scanf("%d",&a[i]);
        if (a[i]%2 == 0){
            even++;
        }
        else {
            odd++;
        }
    }
    printf("total odds are: %d total even are %d",odd,even);
}
