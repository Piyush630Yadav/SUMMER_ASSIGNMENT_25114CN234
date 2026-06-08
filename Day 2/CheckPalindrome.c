#include<stdio.h>
int main()
{
    int a, orinum, rem, reversed= 0;

    printf("Enter a number= ");
    scanf("%d",&a);

    orinum= a;
     
    while(a > 0)
    {
        rem= a % 10;
        reversed= reversed * 10 + rem;
        a= a / 10;
    }
    if(orinum == reversed)
    {
        printf("%d is a palindrome number.\n",orinum);
    }
    else
    {
        printf("%d is not a palindromr number.\n",orinum);
    }
    return 0;


}