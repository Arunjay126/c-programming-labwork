#include <stdio.h>

int main() {
    int l_num = 78,input,i;
    for(i = 0;input!= l_num;i++){
        printf("enter a number: ");
        scanf("%d",&input);
        if (input>l_num){
            printf("u guessed a higher number\n");
        }
        else if (input<l_num){
            printf("You guessed a lower number\n");
        }
        else{
            printf("YOU GUESSED THE RIGHT NUMBER AND YOU TOOK %d attempts",i);
            break;
        }
        
    }
    
}
