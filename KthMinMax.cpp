#include <bits/stdc++.h>
using namespace std;
int getkthmin(int arr[],int n,int k)
{
  sort(arr,arr+n);    
  for(int i=0;i<=n;i++)
    {
        if(k-1==i)
        {
            return arr[i];
            break;
        }
    }  
}
int getkthmax(int arr[],int n,int k)
{
  sort(arr, arr + n, greater<int>());    
  for(int i=0;i<=n;i++)
    {
        if(k-1==i)
        {
            return arr[i];
            break;
        }
    }  
}
int main() {
    int arr[6]={3,5,7,4,8,6};
    int n=6;
    int k=5;
    int kthmin=getkthmin(arr,n,k);
    cout<<"Kth Minimum element is:"<<kthmin<<endl;
    int kthmax=getkthmax(arr,n,k);
    cout<<"Kth Maximum element is:"<<kthmax<<endl;
    return 0;
}