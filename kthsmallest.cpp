#include<iostream>
#include<queue>
using namespace std;
class Solution{
    public:
      int kthSmallest(int arr[], int l, int r, int k) {
        priority_queue<int> pq;
        for(int i=0;i<k;i++)
        {
            pq.push(arr[i]);
        }
        for(int i=k;i<=r;i++)
        {
            if(arr[i]<pq.top())
            {
                pq.pop();
                pq.push(arr[i]);
            }
        }
        int ans=pq.top();
        return ans;
    }
};
int main()
{
    Solution s;
    int arr[6]={2,4,1,6,8,5};
    int n=6;
    int st=0;
    int k=2;
    cout<<"Kth smallest element is:"<<s.kthSmallest(arr,st,n-1,k);
    return 0;
    
}