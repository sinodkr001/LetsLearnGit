#include <iostream>
#include<unordered_map>
using namespace std;

class Solution{
    public:
    int doUnion(int a[], int n, int b[], int m)  {
        //first approach
        /*
        set<int>st;
        for(int i=0;i<n;i++){
            
            st.insert(a[i]);
        }
        for(int i=0;i<m;i++){
            
            st.insert(b[i]);
        }
        
        return st.size();
        */
        unordered_map<int , int>mp;
        for(int i=0 ; i<n; i++){
            mp[a[i]]++;
        }
        for(int i=0; i<m; i++){
            mp[b[i]]++;
        }
        
        return mp.size();


    }
};

int main() {
    Solution s;
    int a[]={1,2,3,4,5};
    int n=5;
    int b[]={1,2,3,};
    int m=3;
    cout<<"Size of two Union array:"<<s.doUnion(a,n,b,m);


    return 0;
}