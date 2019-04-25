#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[100];
    int srch,location;
    cout<<"How many numbers you want to enter : "<<endl;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the search value : "<<endl;
    cin>>srch;

    for(int i=0; i<n; i++)
    {

        if(arr[i]==srch)
        {
            location=i+1;
            break;
        }
    }
    cout<<"The searched number : "<<srch<<" found in location "<<location<<endl;


    return 0;
}
