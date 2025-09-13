#include <stdio.h>

int main() 
{
    int score = 0, answer;
    
    printf("Welcome to the C Quiz App!\n");
    printf("----------------------------\n\n");

    // Question 1
    printf("1. What is the size of an int in C?\n");
    printf("   1. 2 bytes\n");
    printf("   2. 4 bytes\n");
    printf("   3. 8 bytes\n");
    printf("   4. Depends on compiler\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 4)
	{
        score++;
    }

    // Question 2
    printf("\n2. Which of the following is a valid variable name in C?\n");
    printf("   1. int\n");
    printf("   2. 1variable\n");
    printf("   3. variable_1\n");
    printf("   4. float\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 3) 
	{
        score++;
    }

    // Question 3
    printf("\n3. Which header file is required for printf()?\n");
    printf("   1. stdio.h\n");
    printf("   2. conio.h\n");
    printf("   3. stdlib.h\n");
    printf("   4. string.h\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 1) 
	{
        score++;
    }

    // Question 4
    printf("\n4. Which symbol is used to start a preprocessor directive?\n");
    printf("   1. @\n");
    printf("   2. $\n");
    printf("   3. #\n");
    printf("   4. &\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 3) 
	{
        score++;
    }

    // Question 5
    printf("\n5. What will be the output of: printf(\"%%d\", 10); ?\n");
    printf("   1. 10\n");
    printf("   2. %%d\n");
    printf("   3. %d\n");
    printf("   4. Error\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 1) 
	{
        score++;
    }

    // Final Score
    printf("\nYou scored %d out of 5.\n", score);

    if (score == 5)
        printf("Excellent! ??\n");
    else if (score >= 3)
        printf("Good job! ??\n");
    else
        printf("Keep practicing! ??\n");

    return 0;
}

