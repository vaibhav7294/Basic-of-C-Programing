/*It is used to determine 
  triangle height easily*/
  
/*heron's formula is used when you only
know the lengths of three side */

#include <stdio.h>

#include <math.h> 
 // Needed for sqrt()

int main()
 {
    float a, b, c, s, area;

    // Input the sides of the triangle
    
    printf("Enter the length of side a: ");
    scanf("%f", &a);

    printf("Enter the length of side b: ");
    scanf("%f", &b);

    printf("Enter the length of side c: ");
    scanf("%f", &c);

    // Check for valid triangle
    
    if (a + b > c && a + c > b && b + c > a)
	 {
        // Calculate semi-perimeter
        
        s = (a + b + c) / 2;

        // Calculate area using Heron's formula
        
        area = sqrt(s * (s - a) * (s - b) * (s - c));

        // Display the result
        
        printf("Area of the triangle is: %.2f\n", area);
    } else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}

