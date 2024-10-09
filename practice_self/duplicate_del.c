
#include<stdio.h>
int main(){
    int i;
    printf("enter the number of elements for array: ");
    scanf("%d",&i);
    int a[i],b[i];
    for (int x = 0;x<i;x++){
        printf("enter the element: ");
        scanf("%d",&a[x]);
        b[x] = 0;
    }
    int z = 0;
    for(int x = 0;x<i;x++){
        int t =0;
        for(int y = 0;y<z;y++){
            if (a[x] == b[y]){
                t = 1;
                break;
                
            }
        }
        if (t == 1){
            continue;
        }
        else{
            b[z] = a[x];
            z++;
        }
    }
    for(int y = 0;y<z;y++){
        printf("%d",b[y]);
    }
}
