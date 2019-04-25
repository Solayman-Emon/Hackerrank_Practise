#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[100],arr1[100];
    cout<<"How many number you want to entered : "<<endl;
    cin>>n;
    for(int i=0; i<n; i++)
    {

        cin>>arr[i];
    }
    int j=0;
    for(int i=n-1; i>=0; i--)
    {
        arr1[j]=arr[i];
        j++;
    }
    for(int k=0; k<n; k++)
    {
        arr[k]=arr1[k];
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<"\t";
    }

    return 0;
}
