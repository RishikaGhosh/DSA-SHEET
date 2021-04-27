// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
        int minel,maxel;
        int res=arr[n-1]-arr[0];
        for(int i=1;i<=n-1;i++){
            if(arr[i]>=k){
                maxel=max(arr[i-1]+k,arr[n-1]-k);
                minel=min(arr[0]+k,arr[i]-k);
                res=min(res,maxel-minel);
            }
        }
        return res;
    }
};
