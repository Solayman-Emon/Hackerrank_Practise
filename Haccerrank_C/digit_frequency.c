#include<stdio.h>

int main()
{

    char ch[1000];
    int i=0,zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;
    gets(ch);

    while(ch[i]!='\0')
    {
        if(ch[i]=='0')
        {
            zero++;
        }
        else if(ch[i]=='1')
        {
            one++;
        }
        else if(ch[i]=='2')
        {
            two++;
        }
        else if(ch[i]=='3')
        {
            three++;
        }
        else if(ch[i]=='4')
        {
            four++;
        }
        else if(ch[i]=='5')
        {
            five++;
        }
        else if(ch[i]=='6')
        {
            six++;
        }
        else if(ch[i]=='7')
        {
            seven++;
        }
        else if(ch[i]=='8')
        {
            eight++;
        }
        else if(ch[i]=='9')
        {
            nine++;
        }
        i++;
    }
    printf("%d %d %d %d %d %d %d %d %d %d",zero,one,two,three,four,five,six,seven,eight,nine);

    return 0;
}
