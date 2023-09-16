#include<iostream>
using namespace std;
void sort012(int arr[], int n)
{
 int s =0;
    int e= n-1;
    int mid =0 ;
    while(mid<=e)
    {
        if(arr[mid] == 0)
        {
            swap(arr[s] , arr[mid]);
            mid++;
            s++;
        }
        else if(arr[mid] == 1)
        {
            mid++;
        }
        else if(arr[mid] == 2)
        {
            swap(arr[mid] , arr[e]);
            e--;
        }
    }
}
int main()
{
    int arr[5]= {0,2, 1, 2 ,0};
    int n=5;
    sort012(arr,n);
    cout<<"Sorted 0 1 and 2 is:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}