#include <iostream>
using namespace std;

class Solution
{
    public:
    long long maxSubarraySum(int arr[], int n){
        
        long sum=0;
        long maxi=arr[0];
        for(int i=0;i<n;i++)
        {
            sum=sum+arr[i];
            maxi=max(maxi,sum);
            if(sum<0)
              sum=0;
        }
       return maxi; 
        
    }
};

int main() {
    int arr[5]={1,2,3,-2,5};
    int n=5;
    Solution s;
    cout<<"Largest Sum Contigous Subarray is:"<<s.maxSubarraySum(arr,n);
    return 0;
}