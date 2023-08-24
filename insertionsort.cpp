#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout<<"enter size:\n";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements\n";
    for(int i=0;i<size;i++) cin>>arr[i];
    int hole,value;
    for(int i=1;i<size;i++)
    {
        value=arr[i];
        hole=i;
        while(hole>0  && arr[hole-1]>value)
        {
            arr[hole]=arr[hole-1];
            hole=hole-1;
        }
        arr[hole]=value;
    }
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
}