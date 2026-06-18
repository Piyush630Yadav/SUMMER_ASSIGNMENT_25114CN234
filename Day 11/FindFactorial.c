#include<stdio.h>

int factorial(int a)
{
    int i, fact= 1;

    for(i= 1; i <= a; i++)
    {
        fact= fact * i;
    }
    return fact;
}
int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    printf("Factorial= %d",factorial(n));

    return 0;
}
