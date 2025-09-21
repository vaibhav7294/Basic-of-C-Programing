#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int userChoice, computerChoice;

    // Seed the random number generator
    srand(time(NULL));
    computerChoice = rand() % 3 + 1; // 1 = Rock, 2 = Paper, 3 = Scissors

    // Show menu
    
    printf("Choose one:\n");
    
    printf("1. Rock\n");
    
    printf("2. Paper\n");
    
    printf("3. Scissors\n");
    
    printf("Enter your choice (1-3): ");
    
    scanf("%d", &userChoice);

    // Check for valid input
    
    if (userChoice < 1 || userChoice > 3)
	 {
        printf("Invalid choice!\n");
        return 1;
    }

    // Print choices
    
    char *choices[] = {"Rock", "Paper", "Scissors"};
    
    printf("You chose: %s\n", choices[userChoice - 1]);
    
    printf("Computer chose: %s\n", choices[computerChoice - 1]);

    // Determine the winner
    if (userChoice == computerChoice)
	 {
        printf("It's a draw!\n");
    }
	 else if ((userChoice == 1 && computerChoice == 3) ||
               (userChoice == 2 && computerChoice == 1) ||
               (userChoice == 3 && computerChoice == 2)) 
			   {
        printf("You win!\n");
    } 
	else
	{
        printf("Computer wins!\n");
    }

    return 0;
}

