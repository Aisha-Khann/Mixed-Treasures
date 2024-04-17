/************************chaturvediRituA1.c**************
Student Name: Aisha Khan Email Id: khan61
Due Date: October 6th Course Name: CIS 1300
I have exclusive control over this submission via my password.
By including this statement in this header comment, I certify that:
1) I have read and understood the University policy on academic integrity.
2) I have completed the Computing with Integrity Tutorial on Moodle; and
3) I have achieved at least 80% in the Computing with Integrity Self Test.
I assert that this work is my own. I have appropriately acknowledged any and all
material that I have used, whether directly quoted or paraphrased. Furthermore,
I certify that this assignment was prepared by me specifically for this course.
********************************************************/
/*********************************************************
Compiling the program
The program should be compiled using the following flags: -std=c99 -Wall
compiling:
gcc -std=c99 -Wall chaturvediRituA1.c
Running: ./a.out
OR
gcc -std=c99 -Wall chaturvediRituA1.c -o assn1
Running the Program: ./assn1
*********************************************************/



#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h> //for toupper function that I read about online which helps converts letters to uppercase

int main () {

    int birthYear;
    int originalEntry;
    int remainder;
    int sum=0;

    printf("Welcome to the game 'mixedTreasures' \n");

    while(1) {
        printf("Enter your year of birth as a single integer with 4 digits \n");
        int inputCount = scanf("%d", &birthYear);
        while (getchar()!= '\n');

        if (inputCount == 1 && birthYear >= 1000 && birthYear <= 9999) {
            originalEntry = birthYear;
            break; 
        } else {
            printf("Invalid input. Please enter a 4-digit year.\n");
        }
    }
    
    while(birthYear!=0) {
        remainder = birthYear % 10;
        sum+= remainder;
        birthYear= birthYear / 10;  
    }

    printf("Your lucky number for %d is: %d \n", originalEntry, sum);

    int x;

    //question 1
    int award1 = 100;
    int lifelinesLeft = 1;

    srand(time(NULL));

    printf("Question 1: What is the University of Guelph's mascot?\n");
    printf("Options: A. Dragon, B. Centaur, C. Aggie, D. Gryphon\n");

    //Prompt for using lifeline
    char lifelineChoice;
    while (1){
        printf("Do you want to use a lifeline? (y/n): ");
        scanf(" %c", &lifelineChoice);
        if(lifelineChoice == 'y' || lifelineChoice == 'Y') {
            if(lifelinesLeft>0) {
                lifelinesLeft--;
                printf("Options (after using lifeline): C. Aggie, D. Gryphon\n");
                break;
            } else {
                printf("You do not have any lifelines left.\n");
                break;
            }
        } else if (lifelineChoice == 'n' || lifelineChoice == 'N') {
            printf("Options: A. Dragon, B. Centaur, C. Aggie, D. Gryphon\n");
            break;
        } else { //invalid input
            printf("Invalid input. Please enter 'y' or 'n'.\n");
        }
    }
    
    char userAnswer;
    int invalidInput=1;

    //invalid inputs
    while (invalidInput) {
        printf("Enter your answer (A, B, C, or D): ");
        scanf(" %c", &userAnswer);
        switch (userAnswer) {
            case 'A':
            case 'B':
            case 'C':
            case 'D':
                invalidInput = 0;
                break;
            default:
                printf("Invalid input. Please enter 'A', 'B', 'C', or 'D'.\n");
        
        }
    }
    
    if (userAnswer == 'D' || userAnswer == 'd') {
        x = (rand() % 5) + 1;  // Generate a random greeting index (x) again
        if (x == 1) {
            printf("Bravo! You just won $%d\n", award1);
        } else if (x == 2) {
            printf("Congrats! You just won $%d\n", award1);
        } else if (x == 3) {
            printf("Well done! You just won $%d\n", award1);
        } else if (x == 4) {
            printf("Very nice! You just won $%d\n", award1);
        } else if (x == 5) {
            printf("Proud of you! You just won $%d\n", award1);
        }
        else {
            printf("Oops - that was incorrect. You won zero dollars, but it was fun playing with you.\n");
            return 0;
        }
    }


    //question 2
    int award2 = award1*5;

    printf("Question 2: What is the name of the cannon that is painted by students?\n");
    printf("Options: A. Old Jeremiah, B. Painty McPaintface, C. George III, D. Duke of Wellington\n");

    //Prompt for using lifeline
    while (1){
        printf("Do you want to use a lifeline? (y/n): ");
        scanf(" %c", &lifelineChoice);

        if(lifelineChoice == 'y' || lifelineChoice == 'Y') {
            if(lifelinesLeft>0) {
                lifelinesLeft--;
                printf("Options (after using lifeline): Options: A. Old Jeremiah, D. Duke of Wellington\n");
                break;
            } else {
                printf("You do not have any lifelines left.\n");
                break;
            }
        } else if (lifelineChoice == 'n' || lifelineChoice == 'N') {
            printf("Options: A. Old Jeremiah, B. Painty McPaintface, C. George III, D. Duke of Wellington");
            break;
        } else { 
            printf("Invalid input. Please enter 'y' or 'n'.\n");
        }
    }
    
    invalidInput = 1;

    //invalid inputs
    while (invalidInput) {
        printf("Enter your answer (A, B, C, or D): ");
        scanf(" %c", &userAnswer);
        //convert to uppercase
        userAnswer= toupper(userAnswer);
        
        switch (userAnswer) {
            case 'A':
            case 'B':
            case 'C':
            case 'D':
                invalidInput = 0;
                break;
            default:
                printf("Invalid input. Please enter 'A', 'B', 'C', or 'D'.\n");
            }
        }

        if (userAnswer == 'A' || userAnswer == 'a') {
        x = (rand() % 5) + 1;  // Generate a random greeting index (x) again
        if (x == 1) {
            printf("Bravo! You just won $%d\n", award1);
        } else if (x == 2) {
            printf("Congrats! You just won $%d\n", award1);
        } else if (x == 3) {
            printf("Well done! You just won $%d\n", award1);
        } else if (x == 4) {
            printf("Very nice! You just won $%d\n", award1);
        } else if (x == 5) {
            printf("Proud of you! You just won $%d\n", award1);
        }
        else {
            printf("Oops - that was incorrect. You won zero dollars, but it was fun playing with you.\n");
            return 0;
        }
    }
    
    //question 3
    int award3 = award2*2;

    printf("Question 3: Who was the School of Computer Science building at UoG named after?\n");
    printf("Options: A. Joseph Reynolds, B. Ryan Reynolds, C. Joshua Reynolds, D. Greg Klotz\n");

        // Prompt for using lifeline
        while (1){
        printf("Do you want to use a lifeline? (y/n): ");
        scanf(" %c", &lifelineChoice);

        if(lifelineChoice == 'y' || lifelineChoice == 'Y') {
            if(lifelinesLeft>0) {
                lifelinesLeft--;
                printf("Options (after using lifeline): A. Joseph Reynolds, B. Ryan Reynolds\n");
                break;
            } else {
                printf("You do not have any lifelines left.\n");
                break;
            }
        } else if (lifelineChoice == 'n' || lifelineChoice == 'N') {
            printf("Options: A. Joseph Reynolds, B. Ryan Reynolds, C. Joshua Reynolds, D. Greg Klotz\n");
            break;
        } else { //invalid input
            printf("Invalid input. Please enter 'y' or 'n'.\n");
        }
    }

    printf("Enter your answer (A, B, C, or D): \n");
    scanf(" %c", &userAnswer);

    while (invalidInput) {
        printf("Enter your answer (A, B, C, or D): ");
        scanf(" %c", &userAnswer);

        //convert to uppercase
        userAnswer= toupper(userAnswer); 
        
        switch (userAnswer) {
            case 'A':
            case 'B':
            case 'C':
            case 'D':
                invalidInput = 0;
                break;
            default:
                printf("Invalid input. Please enter 'A', 'B', 'C', or 'D'.\n");
        }
        }

        if (userAnswer == 'A' || userAnswer == 'a') {  // Checking for 'A' or 'a'
            x = (rand() % 5) + 1;
        if (x == 1) {
            printf("Bravo! You just won $%d\n", award3);
        } else if (x == 2) {
            printf("Congrats! You just won $%d\n", award3);
        } else if (x == 3) {
            printf("Well done! You just won $%d\n", award3);
        } else if (x == 4) {
            printf("Very nice! You just won $%d\n", award3);
        } else if (x == 5) {
            printf("Proud of you! You just won $%d\n", award3);
        }
    } else {
        printf("Oops - that was incorrect. You still won a reduced award of $500. It was fun playing with you.\n");
        return 0;
    }

    //question 4
    int award4 = award3*5;

    printf("Question 4: How many brains does an octopus have?\n");
    printf("Options: A. 9, B. 2, C. 1, D. 16\n");

    // Prompt for using lifeline
        while (1){
        printf("Do you want to use a lifeline? (y/n): ");
        scanf(" %c", &lifelineChoice);

        if(lifelineChoice == 'y' || lifelineChoice == 'Y') {
            if(lifelinesLeft>0) {
                lifelinesLeft--;
                printf("Options (after using lifeline): A. 9, C. 1\n");
                break;
            } else {
                printf("You do not have any lifelines left.\n");
                break;
            }
        } else if (lifelineChoice == 'n' || lifelineChoice == 'N') {
            printf("Options: A. 9, B. 2, C. 1, D. 16\n");
            break;
        } else { //invalid input
            printf("Invalid input. Please enter 'y' or 'n'.\n");
        }
    }

    
    scanf(" %c", &userAnswer);

        while (invalidInput) {
        printf("Enter your answer (A, B, C, or D): ");
        scanf(" %c", &userAnswer);

        //convert to uppercase
        userAnswer= toupper(userAnswer);
        
        switch (userAnswer) {
            case 'A':
            case 'B':
            case 'C':
            case 'D':
                invalidInput = 0;
                break;
            default:
                printf("Invalid input. Please enter 'A', 'B', 'C', or 'D'.\n");
        }
    }

    if (userAnswer == 'A' || userAnswer == 'a') {  // Checking for 'A' or 'a'
        x = (rand() % 5) + 1;
     if (x == 1) {
            printf("Bravo! You just won $%d\n", award4);
        } else if (x == 2) {
            printf("Congrats! You just won $%d\n", award4);
        } else if (x == 3) {
            printf("Well done! You just won $%d\n", award4);
        } else if (x == 4) {
            printf("Very nice! You just won $%d\n", award4);
        } else if (x == 5) {
            printf("Proud of you! You just won $%d\n", award4);
        }
    } else {
        printf("Oops - that was incorrect. You still won a reduced award of $1000. It was fun playing with you.\n");
        return 0;
    }

    //question 5
    int award5 = award4*2;

    printf("Question 5: How many bones does a shark have?\n");
    printf("Options: A. 42, B. 5, C. 10, D. 0\n");

    // Prompt for using lifeline
    while (1){
        printf("Do you want to use a lifeline? (y/n): ");
        scanf(" %c", &lifelineChoice);

        if(lifelineChoice == 'y' || lifelineChoice == 'Y') {
            if(lifelinesLeft>0) {
                lifelinesLeft--;
                printf("Options (after using lifeline): B. 5, D. 0\n");
                break;
            } else {
                printf("You do not have any lifelines left.\n");
                break;
            }
        } else if (lifelineChoice == 'n' || lifelineChoice == 'N') {
            printf("Options: A. 42, B. 5, C. 10, D. 0\n");
            break;
        } else { //invalid input
            printf("Invalid input. Please enter 'y' or 'n'.\n");
        }
    }

    
    scanf(" %c", &userAnswer);

        while (invalidInput) {
        printf("Enter your answer (A, B, C, or D): ");
        scanf(" %c", &userAnswer);

        //convert to uppercase
        userAnswer= toupper(userAnswer);
        
        switch (userAnswer) {
            case 'A':
            case 'B':
            case 'C':
            case 'D':
                invalidInput = 0;
                break;
            default:
                printf("Invalid input. Please enter 'A', 'B', 'C', or 'D'.\n");
        }
    }

    if (userAnswer == 'D' || userAnswer == 'd') {  // Checking for 'D' or 'd'
        x = (rand() % 5) + 1;
     if (x == 1) {
            printf("Bravo! You just won $%d\n", award5);
        } else if (x == 2) {
            printf("Congrats! You just won $%d\n", award5);
        } else if (x == 3) {
            printf("Well done! You just won $%d\n", award5);
        } else if (x == 4) {
            printf("Very nice! You just won $%d\n", award5);
        } else if (x == 5) {
            printf("Proud of you! You just won $%d\n", award5);
        }
    } else {
        printf("Oops - that was incorrect. You still won a reduced award of 5000$. It was fun playing with you.\n");
        return 0;
    }

    //question 6
    int award6 = award5*5;

    printf("Question 6: What is the largest ocean on Earth?\n");
    printf("Options: A. Pacific, B. Atlantic, C. Indian, D. Arctic\n");

    // Prompt for using lifeline
    while (1){
        printf("Do you want to use a lifeline? (y/n): ");
        scanf(" %c", &lifelineChoice);

        if(lifelineChoice == 'y' || lifelineChoice == 'Y') {
            if(lifelinesLeft>0) {
                lifelinesLeft--;
                printf("Options (after using lifeline): A. Pacific, B. Atlantic\n");
                break;
            } else {
                printf("You do not have any lifelines left.\n");
                break;
            }
        } else if (lifelineChoice == 'n' || lifelineChoice == 'N') {
            printf("Options: A. Pacific, B. Atlantic, C. Indian, D. Arctic\n");
            break;
        } else { //invalid input
            printf("Invalid input. Please enter 'y' or 'n'.\n");
        }
    }

    
    scanf(" %c", &userAnswer);

        while (invalidInput) {
        printf("Enter your answer (A, B, C, or D): ");
        scanf(" %c", &userAnswer);

        //convert to uppercase
        userAnswer= toupper(userAnswer);
        
        switch (userAnswer) {
            case 'A':
            case 'B':
            case 'C':
            case 'D':
                invalidInput = 0;
                break;
            default:
                printf("Invalid input. Please enter 'A', 'B', 'C', or 'D'.\n");
        }
    }

    if (userAnswer == 'A' || userAnswer == 'a') { 
        x = (rand() % 5) + 1;
     if (x == 1) {
            printf("Bravo! You just won $%d\n", award6);
        } else if (x == 2) {
            printf("Congrats! You just won $%d\n", award6);
        } else if (x == 3) {
            printf("Well done! You just won $%d\n", award6);
        } else if (x == 4) {
            printf("Very nice! You just won $%d\n", award6);
        } else if (x == 5) {
            printf("Proud of you! You just won $%d\n", award6);
        }
    } else {
        printf("Oops - that was incorrect. You still won a reduced award of 10000$. It was fun playing with you.\n");
        return 0;
    }

    //question 7
    int award7 = award6*2;

    printf("Question 7: What is the name of the largest fish in the sea?\n");
    printf("Options: A. Blue whale, B. Great white shark, C. Hammerhead shark, D. Whale shark\n");

    // Prompt for using lifeline
    while (1){
        printf("Do you want to use a lifeline? (y/n): ");
        scanf(" %c", &lifelineChoice);

        if(lifelineChoice == 'y' || lifelineChoice == 'Y') {
            if(lifelinesLeft>0) {
                lifelinesLeft--;
                printf("Options (after using lifeline): B. Great white shark, D. Whale shark\n");
                break;
            } else {
                printf("You do not have any lifelines left.\n");
                break;
            }
        } else if (lifelineChoice == 'n' || lifelineChoice == 'N') {
            printf("Options: A. Blue whale, B. Great white shark, C. Hammerhead shark, D. Whale shark\n");
            break;
        } else { //invalid input
            printf("Invalid input. Please enter 'y' or 'n'.\n");
        }
    }

    
    scanf(" %c", &userAnswer);

    while (invalidInput) {
        printf("Enter your answer (A, B, C, or D): ");
        scanf(" %c", &userAnswer);

        //convert to uppercase
        userAnswer= toupper(userAnswer);
        
        switch (userAnswer) {
            case 'A':
            case 'B':
            case 'C':
            case 'D':
                invalidInput = 0;
                break;
            default:
                printf("Invalid input. Please enter 'A', 'B', 'C', or 'D'.\n");
        }
    }

    
    if (userAnswer == 'D' || userAnswer == 'd') { 
        x = (rand() % 5) + 1;
        if (x == 1) {
            printf("Bravo! You just won the maximum amount of $%d\n", award7);
        } else if (x == 2) {
            printf("Congrats! You just won the maximum amount of $%d\n", award7);
        } else if (x == 3) {
            printf("Well done! You just won the maximum amount of $%d\n", award7);
        } else if (x == 4) {
            printf("Very nice! You just won the maximum amount of $%d\n", award7);
        } else if (x == 5) {
            printf("Proud of you! You just won the maximum amount of $%d\n", award7);
        }
    } else {
        printf("Oops - that was incorrect. You still won a reduced award of 50000$. It was fun playing with you.\n");
        return 0;
        }
    printf("Thanks for playing mixedTreasures!\n");

return 0;
}