#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,num=0,digit;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int pnum=n;
    while(n!=0)
    {
        digit=n%10;
        num=num*10+digit;
        n=n/10;

    }
    cout<<"The output number is : "<<num<<endl;
    if(pnum==num)
    {
        cout<<"The entered number is a palindrome"<<endl;
    }
    else
        cout<<"The entered number is not a palindrome"<<endl;

    return 0;
}
