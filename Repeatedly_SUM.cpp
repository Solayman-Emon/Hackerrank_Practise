#include<bits/stdc++.h>
using namespace std;
int main(){

while(true){

    int a,b,c;
    cout<<"Enter the two number which you want to add_"<<endl;
    cin>>a>>b;
    c=a+b;
    cout<<"The result of "<<a <<"+" <<b <<" is "<<c<<endl;
    cout<<"If you want to add another type YES, If not type NO"<<endl;
    char ch;
    cin>>ch;
    if(ch=='Y'||ch=='y'){
        continue;
    }
    else break;

}

return 0;

}

