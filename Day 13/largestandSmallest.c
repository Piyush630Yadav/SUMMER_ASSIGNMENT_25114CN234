#include<stdio.h>
int main()
{
    int n, i, arr[50], largest, smallest;

    printf("Enter number of element: ");
    scanf("%d",&n);

    printf("Ener elements: \n");
    for(i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    largest = smallest = arr[0];

    for(i = 1; i < n; i++){
        if(arr[i] > largest)
        largest = arr[i];

        if(arr[i] < smallest)
        smallest = arr[i];
    }
    printf("Largest element =%d\n",largest);
    printf("smallest element= %d\n",smallest);

    return 0;
}