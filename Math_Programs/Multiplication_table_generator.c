#include <stdio.h>

int main()
{
    int number, range, i;

    // Input the number
    
    printf("Enter a number to generate its multiplication table: ");
    
    scanf("%d", &number);

    // Input the range (how far to go)
    
    printf("Enter the range (e.g., 10 for table up to number x 10): ");
    
    scanf("%d", &range);

    // Print the multiplication table
    
    printf("Multiplication Table of %d:\n", number);
    for (i = 1; i <= range; i++)
	{
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}

