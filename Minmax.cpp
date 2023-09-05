#include <iostream>
#include <climits>
using namespace std;
int mini(int arr[],int n)
{
    int elm=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<elm)
           elm=arr[i];
    }
    return elm;
}
int maxi(int arr[],int n)
{
    int elm=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>elm)
           elm=arr[i];
    }
    return elm;
}

int main() {
    
    int arr[6]={2,5,7,3,9,4};
    int n=6;
    int minimum=mini(arr,n);
    cout<<"Minimum element is:"<<minimum<<endl;
    int maximum=maxi(arr,n);
    cout<<"Maximum element is:"<<maximum<<endl;

    return 0;
}