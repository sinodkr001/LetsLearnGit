#include <iostream>
using namespace std;
void merge(int arr1[],int n,int arr2[],int m,int arr[])
{
    int i=0;
    int j=0;
    int k=0;
    while(i<n&&j<m)
    {
        if(arr1[i]<arr2[j])
        {
            arr[k++]=arr1[i++];
        }
        else
        {
            arr[k++]=arr2[j++];
        }
    }
    while(i<n)
    {
        arr[k++]=arr1[i++]; 
    }
    while(j<m)
    {
        arr[k++]=arr2[j++]; 
    }
    
}

int main() {
    int arr1[5]={1,3,5,7,9};
    int arr2[3]={2,4,5};
    int arr[8]={0};
    merge(arr1,5,arr2,3,arr);
    cout <<"Merge Two Sorted Array Is:";
    for(int i=0;i<8;i++)
    {
      cout<<arr[i]<<" ";
     }
    return 0;
}