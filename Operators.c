// Opeators in C
#include <stdio.h>

int main() {
    int a = 9, b= 5;
    
    // Arithmetic Operataors
    printf("Arithmetic Operataors\n"); 
    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d * %d = %d\n", a, b, a*b);
    printf("%d / %d = %d\n", a, b, (a/b));
    printf("%d %% %d = %d\n\n", a, b, a%b);
    
    // Relational Operators
     //output will be ture or false -- 1/0
    //relational operators are binary operators
    printf("Relational Operataors\n");
    printf("%d < %d = %d\n", a, b, a<b);
    printf("%d > %d = %d\n", a, b, a>b);
    printf("%d == %d = %d\n", a, b, a==b);
    printf("%d != %d = %d\n\n", a, b, a!=b); //not equla to


    // Logical Operators
    printf("Logical Operataors\n");
    printf("AND %d && %d = %d\n", a, b, a && b);
    printf("OR %d || %d = %d\n", a, b, a || b); //truth table is used   //if one of them is zero then the output shows false
    printf("NOT %d = %d\n\n", a, !a); //takes only one operant therefore its uniary operator  //gives the opp answer
    
    // Bitwise Operators
    printf("Bitwise Operataors\n");
    printf("%d & %d = %d\n", a, b, a&b);
    printf("%d | %d = %d\n", a, b, a|b);
    printf("Bitwise XOR %d ^ %d = %d\n", a, b, a^b); //XOR- exclusive or
    printf("Left Shift %d << 2 = %d\n", a, a<<2);
    printf("Right Shift %d >> 2 = %d\n", a, a>>2);
    
    return 0;
}


/* Output

Arithmetic Operataors
9 + 5 = 14
9 - 5 = 4
9 * 5 = 45
9 / 5 = 1
9 % 5 = 4

Relational Operataors
9 < 5 = 0
9 > 5 = 1
9 == 5 = 0
9 != 5 = 1

Logical Operataors
AND 9 && 5 = 1
OR 9 || 5 = 1
NOT 9 = 0

Bitwise Operataors
9 & 5 = 1
9 | 5 = 13
Bitwise XOR 9 ^ 5 = 12
Left Shift 9 << 2 = 36
Right Shift 9 >> 2 = 2

  */







// Online C compiler to run C program online
// Opeators in C
#include <stdio.h>

int main() {
    int a = 6, b= 4;
    
    //Arthematic operators
    printf("Arhtimatic operators\n");
    printf("%d + %d =%d\n",a, b, a+b);
     printf("%d - %d =%d\n",a, b, a-b);
     printf("%d * %d =%d\n",a, b, a*b);
     printf("%d / %d =%d\n",a, b, a/b);
     printf("%d %% %d =%d\n",a, b, a%b);
  
  //Relational operators
  printf("Relational operators");
   printf("%d < %d = %d\n", a, b, a<b);
    printf("%d > %d = %d\n", a, b, a>b);
    printf("%d == %d = %d\n", a, b, a==b);
    printf("%d != %d = %d\n", a, b, a!=b);
  
   // Logical Operators
    printf("Logical Operataors\n");
    printf("AND %d && %d = %d\n", a, b, a && b);
    //any non zero number is considered as true
    printf("OR %d || %d = %d\n", a, b, a || b); 
    printf("NOT %d = %d\n\n", a, !a); //gives the opp answer
    
     // Bitwise Operators
    printf("Bitwise Operataors\n");
    printf("%d & %d = %d\n", a, b, a&b);
    printf("%d | %d = %d\n", a, b, a|b);
    printf("Bitwise XOR %d ^ %d = %d\n", a, b, a^b); //XOR- exclusive or
    printf("Left Shift %d << 2 = %d\n", a, a<<2);
     printf("Right Shift %d >> 2 = %d\n", a, a>>2);
    
      
    return 0;
}
/*output
    
    Arhtimatic operators
6 + 4 =10
6 - 4 =2
6 * 4 =24
6 / 4 =1
6 % 4 =2
Relational operators6 < 4 = 0
6 > 4 = 1
6 == 4 = 0
6 != 4 = 1
Logical Operataors
AND 6 && 4 = 1
OR 6 || 4 = 1
NOT 6 = 0

Bitwise Operataors
6 & 4 = 4
6 | 4 = 6
Bitwise XOR 6 ^ 4 = 2
Left Shift 6 << 2 = 24
Right Shift 6 >> 2 = 1


=== Code Execution Successful ===
    
    
    
    
    
    
    
    
    
    
    
