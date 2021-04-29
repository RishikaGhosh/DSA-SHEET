class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int p)  {
        //code here
        map<int,int>m;
        for(int i=0;i<n;i++){
           if(m.find(a[i])==m.end()){
               m[a[i]]=1;
           }
           else
               m[a[i]]++;
        }
        for(int i=0;i<p;i++){
           if(m.find(b[i])==m.end()){
               m[b[i]]=1;
           }
           else
               m[b[i]]++;
        }
        int count =0;
        for(auto it=m.begin();it!=m.end();it++){
            if((it->second)>=1)
                count++;
        }
        return count;
    }
};
