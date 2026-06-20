#include<stdio.h>
int main()
{
    int r, c, i, j, sum= 0;
    

    printf("Enter rows and column: ");
    scanf("%d %d", &r,&c);
    int a[r][c];

    printf("Enter elements: ");
    for(i= 0; i < r; i++)
    scanf("%d",a[i][j]);

    printf("Column wise sum\n");

    for(j= 0; j < c; j++)
     sum=0;
     for(i= 0; i < r; i++)
     sum += a[i][j];

     printf("Column %d Sum= %d\n",j,sum);

     return 0;
}