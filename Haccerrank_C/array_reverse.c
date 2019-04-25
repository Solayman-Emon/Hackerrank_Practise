#include<stdio.h>

int main()
{
    int arr[1000],n,temp,j;
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    j=n;

    for(int i=0; i<n/2; i++)
    {
        temp=arr[i];
        arr[i]=arr[j-1];
        arr[j-1]=temp;
        j--;
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
