#include<bits/stdc++.h>
using namespace std;
int main()
{

    char ch;
    cin>>ch;
    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout<<"The entered character is a vowel"<<endl;
        break;

    default:
        cout<<"The entered character is a consotant"<<endl;

    }


    return 0;
}
