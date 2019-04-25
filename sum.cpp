#include<bits/stdc++.h>
using namespace std;
int main(){

int n,value,sum=0;
cout<<"How many number you want to add "<<endl;
cin>>n;
for(int i=0;i<n;i++){

    cin>>value;
    sum=sum+value;
}
cout<<"The sum is "<<sum<<endl;

return 0;
}
