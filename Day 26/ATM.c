#include<stdio.h>
int main()
{
    int chose, amount;
    float balance= 5000;

    printf("1. Check balance.\n");
    printf("2. Deposit.\n");
    printf("3. Withdraw\n");
    printf("Enter your Choice: ");
    scanf("%d",&chose);

    switch(chose){
        case 1:
        printf("Balance = %.2f",balance);
        break;

        case 2:
        printf("Enter deposit amount: ");
        scanf("%f",&amount);
        balance += amount;
        printf("Updated Balance = %2.f",balance);
        break;

        case 3:
        printf("Enter Withdrawal amount: ");
        scanf("%f",&amount);
        if(amount <= balance){
            balance -= amount;
            printf("Updated Balance = %2.f",balance);
        } else {
            printf("Insufficient Balance.");
        }break;

        default:
        printf("Invalid Choice.");
    }
    return 0;
}