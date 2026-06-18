#include<stdio.h>

int findSum(int a, int b);

int main()
{
    int x, y, result;
    
    printf("Enter first number: ");
    scanf("%d",&x);

    printf("Enter second number: ");
    scanf("%d",&y);

    result= findSum(x, y);

    printf("The sum of %d and %d is: %d\n", x,y,result);
    return 0;
}

int findSum(int a, int b){

    return a + b;}
