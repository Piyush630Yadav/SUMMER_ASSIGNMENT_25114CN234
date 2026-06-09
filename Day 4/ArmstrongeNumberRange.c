#include<stdio.h>
int main()
{
    int start, end, a, temp, rem, sum;

    printf("Enter start: ");
    scanf("%d",&start);
    printf("Enter end: ");
    scanf("%d", &end);

    printf("Armstronge numbersare:\n");

    for(a= start; a<= end; a++)
    {
        temp= a;
        sum= 0;
        while(temp != 0){
            rem= temp % 10;
            sum= sum + (rem * rem * rem);
            temp= temp / 10;
        }
        if(sum == a)
        printf("%d", a);
    }
    return 0;
}