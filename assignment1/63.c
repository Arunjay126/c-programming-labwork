#include<stdio.h>
int main(){
    int a[3][3],max,min;
    printf("enter the values for the array: ");
    for(int i = 0;i<3;i++){
        for(int j = 0 ;j<3;j++){
            scanf("%d",&a[i][j]);
            min= a[i][j];
            max = a[i][j];
        }
    }
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            int num = a[i][j];
            if (num> max){
                max = a[i][j];
            }
            if (num<min){
                min = a[i][j];
            }
        }
    }
    printf("maximum value is %d minimum value is %d",max,min);
    
}
