#include <stdio.h>

#define PI 3.14159

int main() {
    float radius, area;

    // Prompt the user for the radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the area
    area = PI * radius * radius;

    // Display the result
    printf("The area of the circle with radius %.3f is %.3f\n", radius, area);
}

OUTPUT:

Enter the radius of the circle: 10
The area of the circle with radius 10.000 is 314.159


=== Code Execution Successful ===

XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
   
