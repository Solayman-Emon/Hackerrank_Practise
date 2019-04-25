#include<bits/stdc++.h>
using namespace std;

union person{
//string name;
int age;
int  salary;

};
union person2{
char ch;
//int z;
};

int main(){
union person p1;
cout<<sizeof(person)<<endl;
cout<<sizeof(person2);

return 0;
}
