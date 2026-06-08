#include<stdio.h>
int main()
{
    int a, rem, sum=0;

    printf("Enter an integer: ");
    scanf("%d",&a);

    while(a!=0)
        {rem= a % 10;
        sum= sum + rem;
        a= a/ 10; }

        printf("Sum of digit = %d\n",sum);
        return 0;
}