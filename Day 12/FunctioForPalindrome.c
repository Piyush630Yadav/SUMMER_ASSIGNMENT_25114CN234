#include<stdio.h>

int isPalindrome(int a){
    int oriNum= a;
    int reverseNum= 0;
    int rem;

    if (a < 0){
        return 0;
    }

    while(a != 0){
        rem= a % 10;
        reverseNum= (reverseNum * 10) + rem;
        a= a / 10;
    }
    if(oriNum == reverseNum){
        return 1;
    } else{
        return 0;
    }
}
int main()
{
int inputNum;

printf(" Enter an integer: ");
scanf("%d", &inputNum);

if(isPalindrome(inputNum)){
    printf("%d is a palindrome number.\n",inputNum);
} else{
    printf("%d is not a palindrome number.\n",inputNum);
}
return 0;

}