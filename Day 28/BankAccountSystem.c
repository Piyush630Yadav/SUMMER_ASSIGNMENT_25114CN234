#include<stdio.h>
int main()
{
    char name[50];
    int accNo;
    float balance, deposit, withdraw;

    printf("Enter Account Number: ");
    scanf("%d",&accNo);

    printf("Enter Account Holder Name: ");
    scanf("%S",name);

    printf("Enter Balance: ");
    scanf("%f",&balance);

    printf("Enter Deposit Amount: ");
    scanf("%f",&deposit);

    printf("Enter Withdraw Amount: ");
    scanf("%f",&withdraw);

    if(withdraw <= balance){
        balance -= withdraw;
    } else{
        printf("Insufficient Balance!\n");
    }

    printf("\n--- Account Details---\n");
    printf("Account No: %d\n",accNo);
    printf("Name: %s\n",name);
    printf("Balance: %.2f\n",balance);

    return 0;
}