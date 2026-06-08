#include<stdio.h>
int main()
{
    int a, rem, reversed=0;

    printf("Enter a number: ");
    scanf("%d",&a);

    while(a!=0)
    {
        rem= a % 10;
        reversed= reversed * 10 + rem;
        a= a / 10;
    }
    printf("Reversed number =%d\n",reversed);
    return 0;
}