INPUT:l
#include <stdio.h>

int main() {
   int a,b,c,sum=0;
   printf("Enter any number to check whether it is Palindrome or not: ");
   scanf("%d",&c);
   a=c;
   while(a>=1){
       b=a%10;
       a=a/10;
       sum=sum*10+b;
   }
   if(sum==c){
       printf("\n Number is A Palindrome ");
   }
   else{
       printf("\nNumber is NOT a Palindrome");
   }
     return 0;
}

OUTPUT:
Enter any number to check whether it is Palindrome or not: 123465

Number is NOT a Palindrome

=== Code Execution Successful ===
