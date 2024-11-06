// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num, q,r ;
    printf("Enter a number:");
    scanf("%d",&num);
    q=num;
    while(q>0){
        r=q%10;
        printf("%d\n",r);
        q=q/10;
    }
    return 0;
}
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
OUTPUT:
Enter a number:225
5
2
2


=== Code Execution Successful ===
