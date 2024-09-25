
#include<stdio.h>
int main(){
    int i;
    printf("enter the length of array: ");
    scanf("%d",&i);
    int a[i],b[i],u =0,occ;
    for(int j = 0;j<i;j++){
        scanf("%d",&a[j]);
    }
    for(int j= 0;j<i;j++){
        int xy = 0;
        for(int k = 0;k<i;k++){
            if (a[j] == b[k]){
                xy = 1;
                break;
            }
        }
        if (xy == 1){
            continue;
        }
        else{
            occ = 0;
            for(int k = 0;k<i;k++){
                if (a[j] == a[k]){
                    occ++;
                }
            }
            printf("occurance of %d is %d\n",a[j], occ);
            b[u] = a[j];
            u++;
        }
    }
}
