#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout<<"Enter size of the array:\n";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array\n";
    for(int i=0;i<size;i++) cin>>arr[i];
    int current_min=0;
    for(int i=0;i<size;i++)
    {
        int min_index=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[current_min])
            current_min=j;
        }
        swap(arr[current_min],arr[min_index]);
    }
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";

}