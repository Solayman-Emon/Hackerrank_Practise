#include<bits/stdc++.h>
using namespace std;

void Sort(int p[],int a[],int br[],int n)
{
    int temp;
    for(int i=1; i<n; ++i)
    {
        for(int j=0; j<(n-i); ++j)
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

                temp=br[j];
                br[j]=br[j+1];
                br[j+1]=temp;

                temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
    }

}


int main()
{
    int burst_time[100],priority[100],p[100];
    int n;
    cout<<"Enter the number of the process : "<<endl;
    cin>>n;


    for(int i=0; i<n; i++)
    {
        cout<<"Enter the burst time of the process : "<<endl;
        cin>>burst_time[i];
        cout<<"Enter the priority of the process : "<<endl;
        cin>>priority[i];
        p[i]=i+1;
    }

    Sort(p,priority,burst_time,n);
    for(int i=0;i<n;i++){
       cout<<"Process"<<p[i]<<endl;
    }


    return 0;
}
