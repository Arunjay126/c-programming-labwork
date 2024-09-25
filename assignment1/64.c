#include<stdio.h>
int main(){
    int a[3][3],sum;
    printf("enter the values: ");
    for(int i = 0;i<3;i++){
        sum = 0;
        for(int j =0;j<3;j++){
            scanf("%d",&a[i][j]);
            sum+=a[i][j];
        }
        printf("sum for row%d is %d\n",i+1,sum);
    }
    
    
}
