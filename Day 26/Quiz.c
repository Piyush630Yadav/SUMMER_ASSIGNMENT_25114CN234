#include<stdio.h>
int main()
{
    int answer, score = 0;

    printf("Quiz Application\n");

    printf("\n1. What is Capital of India?\n");
    printf("1. Mumbai\n 2. Delhi\n ");
    printf("Enter your answer: ");
    scanf("%d",&answer);

    if(answer == 2)
    score++;

    printf("\2. 5 + 3 = ?\n");
    printf("1. 6\n 2. 8\n");
    printf("Enter your answer: ");
    scanf("%d",&answer);

    if(answer == 2)
    score++;

    printf("\n Your Score= %d2\n",score);

    return 0;
}