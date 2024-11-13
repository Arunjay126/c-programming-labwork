#include<stdio.h>
#include<math.h>
int pal(int a){
    int b,c = 10,d = 1,e = 10,f = 0;
    b = a;
    while(b/c>=1){
        c*=10;
        d++;
    }
    for (int x = 1;x <= d;x++){
        f+=(b%e) *pow(10,d-x);
        b=b/10;
    }
    if (f == a){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int a;
    printf("enter the number: ");
    scanf("%d",&a);
    if (pal(a) == 0){
        printf("it is a palindrome");
    }
    else{
        printf("it is not a palindrome");
    }
    
    
}
