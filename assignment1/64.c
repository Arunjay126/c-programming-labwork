#include<stdio.h>
int main(){
    int a[3][3],sum[3],y;
    printf("enter the values: ");
    for(int i = 0;i<3;i++){
        y = 0;
        for(int j =0;j<3;j++){
            scanf("%d",&a[i][j]);
            y+=a[i][j];
        }
        sum[i] = y;
    }
    for(int i = 0;i<3;i++){
        printf("sum of row%d is %d",i,sum[i]);
    }
}
