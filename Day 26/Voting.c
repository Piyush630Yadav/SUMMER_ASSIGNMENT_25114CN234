#include<stdio.h>
int main()
{
    int n, age= 18;

    printf("Enter your age: ");
    scanf("%d",&n);

    if(age <= n){
        printf("Eligible for voting.\n");
    } else{
        printf("Not Eligible for voting.\n");
    }
    return 0;
}