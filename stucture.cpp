#include<bits/stdc++.h>
using namespace std;
struct person
{
    string name;
    int age;
    float salary;

};

void Display(struct person p[]){

for(int i=0; i<3; i++)
    {
        cout<<"The person "<<i+1<<" information"<<endl;
        cout<<"Name "<<p[i].name<<endl;
        cout<<"Age "<<p[i].age<<endl;
        cout<<"Salary "<<p[i].salary<<endl;
    }

}

int main()
{
    struct person Person[100];
    for(int i=0; i<3; i++)
    {
        cout<<"Please Enter the person "<<i+1<<" information"<<endl;
        cout<<"Enter the name ";
        cin>>Person[i].name;
        cout<<"Enter the age ";
        cin>>Person[i].age;
        cout<<"Enter the salary ";
        cin>>Person[i].salary;
    }

    Display(Person);

    return 0;
}
