#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[100];
    cout<<"How many number do you want to enter : "<<endl;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int location,num;
    cout<<"In what location you want to entered the element : "<<endl;
    cin>>location;
    cout<<"Enter your number : "<<endl;
    cin>>num;

    for(int i=n-1; i>=location-1; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[location-1]=num;
    for(int i=0; i<=n; i++)
    {
        cout<<arr[i]<<"\t";
    }

    return 0;
}
