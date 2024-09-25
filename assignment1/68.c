#include<stdio.h>
int main(){
    int a[3][3],b[3][3],c[3][3];
    printf("enter the values for first matrix: ");
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the values for second matrix: ");
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            scanf("%d",&b[i][j]);
            c[i][j] = a[i][j]*b[i][j];
        }
    }
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            printf("%d",c[i][j]);
        }
        printf("\n");
    }
}
