#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,digit,Nnum=0;
    cout<<"Please Enter a number : " <<endl;
    cin>>n;
    while(n>0)
    {
        digit=n%10;
        sum=sum+digit;
        Nnum=Nnum*10+digit;
        n=n/10;
    }
    cout<<"The reverse number is : "<<Nnum<<endl;
    cout<<"And The sum of "<<Nnum<<" is : "<<sum<<endl;
    return 0;
}
