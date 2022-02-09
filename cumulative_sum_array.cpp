#include<iostream>
using namespace std;

int prefix_sum(int a[],int size)
{
    int prefix[size] = {0};
    prefix[0] =a[0];
    for(int i=1;i<size;i++)
    {
        prefix[i] = prefix[i-1]+a[i];   
    }

    for(auto x:prefix)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    int size = sizeof(arr)/sizeof(int);
    for(auto x:arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    prefix_sum(arr,size);
     
}