#include<bits/stdc++.h>
using namespace std;
int main(){
char ch[100];
cout<<"Please Enter a Number :"<<endl;
cin>>ch;
int sum,index;
sum=index=0;

while(ch[index]!='\0'){
    int t=ch[index]-'0';
    sum=sum+t;
    index++;
}
cout<<"The sum of digit  "<<ch<<" is : "<< sum<<endl;

return 0;

}
