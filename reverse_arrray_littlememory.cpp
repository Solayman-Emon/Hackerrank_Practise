#include<bits/stdc++.h>
using namespace std;
int main(){
int n,arr[100];
cout<<"How many number you want to enter : "<<endl;
cin>>n;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int k=n-1;
for(int i=0;i<n/2;i++){
    int temp=arr[i];
    arr[i]=arr[k];
    arr[k]=temp;
    k--;

}
for(int i=0;i<n;i++){
    cout<<arr[i];
}


return 0;
}
