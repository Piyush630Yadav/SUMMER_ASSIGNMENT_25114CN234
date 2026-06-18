#include<stdio.h>

int isPrime(int a)
{
    int i;
    if(a <= 1)
    return 0;

    for(i= 2; i < a; i++)
    {
        if(a % i == 0)
        return 0;
    }
    return 1;
}
int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d",&x);

    if(isPrime(x))
    printf("Prime number");
    else
    printf("Not prime");

    return 0;
}