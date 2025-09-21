#include <stdio.h>

int main()
 {
 	//float is used for allow decimal input
    float side, area;

    // Ask user to enter the side of the square
    printf("Enter the length of the side of the square: ");
    scanf("%f", &side);

    // Calculate the area
    area = side * side;

    // Display the result
    //%2f is use to specify two digit after the decimal
    printf("Area of the square is: %.2f\n", area);

    return 0;
}

