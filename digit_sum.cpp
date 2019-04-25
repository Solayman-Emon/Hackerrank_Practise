#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cout<<"Please Enter a number: "<<endl;
    cin>>n;
    int sum=0;
    int x;
    int temp=n;

    while(temp!=0)
    {

        x=temp%10;
        sum=sum+x;
        temp=temp/10;

    }

    cout<<"The sum of digit  "<<n<<" is : " <<sum<<endl;

    return 0;
}
