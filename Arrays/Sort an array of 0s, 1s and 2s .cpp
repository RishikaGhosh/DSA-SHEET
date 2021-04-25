// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here 
        int low=0;
        int mid=0;
        int high=n-1;
        while(mid<=high){
            if(a[mid]==0){
                swap(a[low],a[mid]);
                low++;
                mid++;
            }
            else if(a[mid]==1)
                mid++;
            else{
                swap(a[high],a[mid]);
                high--;
            }
        }
    }
    
};
