#include <stdio.h>
int main(){
  char a;
  printf("enter a character\n");
  scanf("%c",&a);
  if ((a>=65 && a<=90)){
    printf("CAPITAL LETTER");
  }
  else if (a>=97 && a<=122){
    printf("SMALL CASE LETTER");
  }
  else{
    printf("enter a letter");
  }
}
