#include <stdio.h>
 int main()
  {
  int myAge = 25;
  int votingAge = 18;

  if (myAge >= votingAge)
  {
    printf("Old enough to vote!");
  }
  else 
  {
    printf("Not old enough to vote.");
  }
  return 0;
  }

Output:
Old enough to vote!

xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx


#include <stdio.h>
 int main()
  {
  int  age;
  printf("enter your age:");
  scanf("%d",&age );
  
  int votingAge = 18;

  if (age >= votingAge)
  {
    printf("Old enough to vote!");
  }
  else 
  {
    printf("Not old enough to vote.");
  }
  return 0;
  }

OUTPUT:
enter your age:25
Old enough to vote!

=== Code Execution Successful ===
