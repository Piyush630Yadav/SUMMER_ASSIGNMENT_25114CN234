#include<stdio.h>
int main()
{
    int n = 25, guess;
    
    printf("Guess the NUmber(1 to 50): ");
    scanf("%d",&guess);

    if(guess == n)
    printf("Congratulation! You guessed the correct number.\n");
    else
    printf("You guessed the wrong number.\n");

    return 0;
}