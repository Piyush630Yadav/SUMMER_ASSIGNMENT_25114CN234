#include<stdio.h>
int main()
{
  int n, i, even= 0, odd= 0;
  int arr[50];

  printf("Enter number of elements: ");
  scanf("%d",&n);

  printf("Enter elements: \n");
  for(i = 0; i < n; i++)
  {
    scanf("%d",&arr[i]);

    if(arr[i] % 2 == 0)
    even++;
    else
    odd++;
  }
  printf("Even number = %d\n", even);
  printf("odd elements= %d\n",odd);

  return 0;
}