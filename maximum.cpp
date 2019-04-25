#include<bits/stdc++.h>
using namespace std;

int Max(int arr[],int n)
{
    int maxi=arr[0];
    for(int i=1; i<n; i++)
    {
        if(maxi<arr[i])
        {
            maxi=arr[i];
        }

    }
    return maxi;

}

int Min(int arr[],int n)
{
    int mini=arr[0];
    for(int i=1; i<n; i++)
    {
        if(mini>arr[i])
        {
            mini=arr[i];
        }

    }
    return mini;

}

int main()
{

    int n,arr[100],maximum;
    cout<<"How many number you want to enter : "<<endl;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"The maximum value is : "<<Max(arr,n)<<endl;
    cout<<"The minmum value is : "<<Min(arr,n)<<endl;

    return 0;
}
