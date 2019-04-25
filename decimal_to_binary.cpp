#include<bits/stdc++.h>
using namespace std;

void Decimal_To_Binary(int n)
{
    int arr[100],i=0;
    while(n>0)
    {
        arr[i]=n%2;
        n=n/2;
        i++;

    }
    for(int j=i-1; j>=0; j--)
    {

        cout<<arr[j];
    }


}

int main()
{
    int n;
    cout<<"Please Enter a Decimal number : "<<endl;
    cin>>n;
    Decimal_To_Binary(n);

    return 0;
}
