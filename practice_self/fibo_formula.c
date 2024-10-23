#include<stdio.h>
#include<math.h>
int main(){
    int n,q,o;
    float h,p;
    printf("enter total elements: ");
    scanf("%d",&n);
    int a[n];
    for(int i = 0;i<n;i++){
        printf("enter the element: ");
        scanf("%d",&a[i]);
        h = sqrt(5*pow(a[i],2)+4);
        q = h;
        p = sqrt(5*pow(a[i],2)-4);
        o = h;
        (h == q)|| (p = o)?printf("fibo\n"):printf("notfibo\n");
    }

}
