// #include<stdio.h>
// #include<math.h>
// int main(){
//     int a,dig = 0,c,r;
//     printf("enter the number");
//     scanf("%d",&a);
//     c = a;
//     while (c!=0){
//         c = c/10;
//         dig = dig+1;
//     }
//     r = 0;
//     while (dig!=0){
//         r += (a%10)*pow(10,dig-1);
//         dig--;
//         a = a/10;
//     }
//     printf("%d",r);
// }
// palindrome question
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int a,dig = 0,c,r=0;
//     printf("enter the number");
//     scanf("%d",&a);
//     c = a;
//     while(c!=0){
//         c = c/10;
//         dig++;
//     }
//     c = a;
//     while(dig!=0){
//         r+=(c%10)*pow(10,dig-1);
//         dig--;
//         c = c/10;
//     }
//     if (r == a){
//         printf("its a palindrome");
//     }
//     else{
//         printf("its not a palindrome");
//     }
// }

// #include<stdio.h>
// #include<math.h>
// int main(){
//     int a,b=0,i = 0;
//     printf("enter the number");
//     scanf("%d",&a);
//     while (a!=0){
//         if (a%2 !=0){
//             a = (a-1)/2;
//             b+= 1*pow(10,i);
//         }
//         else{
//             a = a/2;
//         }
//         i++;
//     }
//     printf("%d",b);
// }
// #include<stdio.h>
// int main(){
//     int a,b,i=1,g,x;
//     printf("enter two numbers");
//     scanf("%d%d",&a,&b);
//     g = a>b? b: a;
//     while(g>=i){
//         if (a%i == 0&& b%i == 0){
//             x = i;
//         }
//         i++;
//     }
//     printf("gcd is %d",x);
// }
