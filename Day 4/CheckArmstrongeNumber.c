#include<stdio.h>
int main()
{
    int a, temp, rem, sum= 0;

    printf("Enter the number: ");
    scanf("%d",&a);

    temp = a;

    while(temp != 0)
    {
        rem= temp % 10;
        sum= sum + (rem * rem * rem);
        temp= temp / 10;
    }
    if(sum == a)
    printf("%d is an armstronge number.",a);

    else
    printf("%d is not an armstronge number.",a);

    return 0;

}