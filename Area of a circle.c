#include <stdio.h>

#define PI 3.14159 
 // Define constant value of PI

int main()
 {
    float radius, area;

    // Ask the user to enter the radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the area
    area = PI * radius * radius;

    // Display the result
    printf("Area of the circle is: %.2f\n", area);

    return 0;
}

