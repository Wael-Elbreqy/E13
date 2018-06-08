#include <stdio.h>
#include <stdlib.h>
int scan_arr(int *arr)
{
    int i;
    for (i=0;i<5;i++)
    {
        printf("Enter arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
}
int Odd_arr(int *arr)
{
    int m=0;
    int i;
    for (i=0;i<5;i++)
    {
        if (arr[i]%2==1)
        {
        m++;
        printf("The odd array are [%d] = %d",m,arr[i]);
        }
    }
}
int main()
{
    int arr[5];
    scan_arr(arr);
    Odd_arr(arr);
}
