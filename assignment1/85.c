#include<stdio.h>
int vow(char a){
    int b = (int) a;
    if((a == 97)|| (a == 101)|| (a==105)|| (a == 111)|| (a==117)||(a==65)||(69)||(a == 73)||(a==79)||(a == 85)){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    char a;
    printf("enter a character:");
    scanf("%c",&a);
    if (vow(a) == 0){
        printf("vowel");
    }
    else{
        printf("not vowel");
    }
}
