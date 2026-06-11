#include<stdio.h>
int main()
{
    int a, oriNum, rem, i, fact, sum= 0;

    printf("Enter a number: ");
    scanf("%d",&a);

    while(a > 0){
        rem = a % 10;
        fact= 1;
        for( i= 1; i <= rem; i++){
            fact*= i;
        }
        sum += fact;
        a /=10;
    }
    if(sum == oriNum && oriNum > 0){
        printf("%d is a stronge number.\n",oriNum);
    }
    else{
        printf("%d is not a stronge number.\n",oriNum);
    }
    return 0;
}