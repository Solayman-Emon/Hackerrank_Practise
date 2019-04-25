#include<bits/stdc++.h>
using namespace std;

enum day_of_weeks
{

    Sun,Mon,Tues,Wed,Thurs,Fri,Sat

};
int main()
{

    enum day_of_weeks day1[10];

    day1[0]=Sun;
    day1[1]=Mon;
    day1[2]=Tues;

    for(int i=0; i<3; i++)
    {
        cout<<day1[i]<<endl;
    }
    return 0;
}
