#include<stdio.h>
int main()
{
    int r, c ,i ,j, a[r][c];
    int sum= 0;

    printf("Enter rows and column: ");
    scanf("%d %d",&r, &c);

    printf("Enter elements: ");
    for(i= 0; i < r; i++){
        for(j= 0; j < c; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Row wise sum: \n");

    for(i= 0; i < r; i++){
        int sum= 0;
    }
    for(j= 0; j < c; j++){
     sum += a[i][j];
    }
    printf("Row %d sum = %d\n", i , sum);
     
    return 0;
}