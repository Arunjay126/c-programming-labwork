#include<stdio.h>
int main(){
    int a[10],pos=0,neg=0,zer = 0;
    printf("enter 10 numbers: ");
    for(int i = 0;i<10;i++){
        scanf("%d",&a[i]);
        if (a[i]>0){
            pos++;
            
        }
        else if (a[i]<0){
            neg++;
        }
        else{
            zer++;
        }
    }
    printf("total positive are: %d total negative are %d total zeros are %d",pos,neg,zer);
}
