#include<stdio.h>
int main()
{

    int arr[]= {1,2,3,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int N=arr[n-1];
    int sum=(N*(N+1))/2;
    int Sum=0;
    for(int i=0; i<n; i++)
    {
        Sum=Sum+arr[i];
    }
    int digit=sum-Sum;
    printf("%d",digit);


    return 0;
}
