#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m,arr[10],arr1[5],marr[20],loc;
    cout<<"How many number you want to insert in first array : "<<endl;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"How many number you want to insert in second array : "<<endl;
    cin>>m;
    for(int i=0; i<m; i++)
    {
        cin>>arr1[i];
    }

    for(int j=0; j<n; j++)
    {
        marr[j]=arr[j];
        loc=j;
    }
    int h=0;
    for(int k=loc+1; k<n+m; k++)
    {
        marr[k]=arr1[h];
        h++;
    }

    for(int i=0; i<n+m; i++)
    {
        cout<<marr[i]<<"\t";
    }


    return 0;
}
