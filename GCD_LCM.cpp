#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m;
    int arr[100],arr1[100];
    cout<<"Please Enter the two numbers :"<<endl;
    cin>>n>>m;
    int j,k;
    j=k=0;

    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            arr[j]=i;
            j++;
        }
    }

    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            arr1[k]=i;
            k++;
        }
    }

    for(int i=0; i<10; i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}
