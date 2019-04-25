#include<stdio.h>
int Max(int arr[])
{
    int max=arr[0];
    for(int i=1; i<4; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;

}

int main()
{
    int arr[4];
    for(int i=0; i<4; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("%d",Max(arr));


    return 0;
}
