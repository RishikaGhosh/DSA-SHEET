class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
        
        // Your code here
        int curr=0;
        int maxsum=INT_MIN;
        for(int i=0;i<n;i++){
            curr=curr+arr[i];
            if(maxsum<curr)
                maxsum=curr;
            if(curr<0)
                curr=0;
        }
        return maxsum;
    }
