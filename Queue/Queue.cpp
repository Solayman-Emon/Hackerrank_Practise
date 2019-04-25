#include<bits/stdc++.h>
using namespace std;

int QueueSize = 5;
int Queue[5];
int Rear = -1, Front = -1;

void enQueue(int value)
{
    if(Rear == (QueueSize-1))
    {
        cout<<"The Queue is Full"<<endl;
    }
    else
    {
        if(Front == -1)
        {
            Front = 0;
        }
        Rear ++;
        Queue[Rear] = value;
        cout<<"Inserted -> "<<Queue[Rear]<<endl;
    }
}

void deQueue()
{
    cout<<"The deQueued item is "<<Queue[Front]<<endl;
    Front ++;

}

void display()
{

    cout<<"The State of Queue is :"<<endl;
    for(int i=0 ; i<QueueSize; i++)
    {
        cout<<Queue[i]<<endl;
    }

}

int main()
{
    int x, i=0;
    while(i <= QueueSize)
    {
        cout<<"Please insert a value in Queue"<<endl;
        cin>>x;
        enQueue(x);
        i++;
    }
    display();
}
