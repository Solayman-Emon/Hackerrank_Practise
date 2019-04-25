#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int fac=1;
    cout<<"Please Enter a number"<<endl;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        fac=fac*i;
    }
    cout <<"The factorial "<<n<<"! "<<"is : "<<fac<<endl;
    return 0;
}
