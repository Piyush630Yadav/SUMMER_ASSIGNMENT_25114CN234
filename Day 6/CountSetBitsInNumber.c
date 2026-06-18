#include<stdio.h>
int main()
{
    int a, count= 0;

    printf("Enter a number: ");
    scanf("%d",&a);

    while (a > 0)
    {
        if(a % 2 == 1)
        count++;

        a= a / 2;
    }
    printf("Number of sets bits= %d",count);

    return 0;
    
}