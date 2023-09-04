#include <iostream>
using namespace std;
void reverses(int arr[],int n)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        swap(arr[s++],arr[e--]);
    }
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl; 
}

int main() {
    
    int arr[6]={4,3,6,8,1,5};
    int n=6;
    cout<<"Before reverse array element is:";
    print(arr,n);
    reverses(arr,6);
    cout<<"After reverse array element is:";
    print(arr,n);
    return 0;
}