#include<stdio.h>
int main(){
    int i,se,occ = 0;
    printf("enter the length of array: ");
    scanf("%d",&i);
    int a[i];
    printf("enter the values of array: ");
    for(int j = 0;j<i;j++){
        scanf("%d",&a[j]);
    }
    printf("enter the element you want to search: ");
    scanf("%d",&se);
    for(int j = 0;j<i;j++){
        if (se == a[j]){
            occ++;
        }
    }
    printf("total occurance is %d",occ);
}
