#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int res=1;
    for(int i=n; i>=1; i--)
    {
        res=res*i;
    }
    return res;

}

int main()
{
    int n,r;
    cin>>n>>r;
    int permutation=factorial(n)/factorial(n-r);
    int combination=factorial(n)/(factorial(r)*factorial(n-r));
    cout<<"The permutation is : "<<permutation<<endl;
    cout<<"The combination is : "<<combination<<endl;


    return 0;
}
