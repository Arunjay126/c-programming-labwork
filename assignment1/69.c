#include<stdio.h>
int main(){
    int i,f,t = 0;
    printf("enter the length of array: ");
    scanf("%d",&i);
    int a[i];
    printf("enter the values of array: \n");
    for(int j = 0;j<i;j++){
        scanf("%d",&a[j]);
    }
    printf("enter the value you want to search: ");
    scanf("%d",&f);
    for(int j=0;j<i;j++){
        if (f == a[j]){
            printf(" number found at index %d",j);
            t = 1;
            break;
        }
    }
    if (t == 0){
        printf("number not found");
    }
}
