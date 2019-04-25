#include<bits/stdc++.h>
using namespace std;

int Check_Vowel(char ch){
if(ch>='A'&& ch<='Z'){
    ch=ch+32;
}
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
    return 1;
}

}

int main(){
char ch;
cout<<"Enter a Character: "<<endl;
cin>>ch;
int check=Check_Vowel(ch);
if(check==1){
    cout<<"The entered character is a Vowel"<<endl;
}
else cout<<"The entered character is a Consotant"<<endl;


return 0;
}
