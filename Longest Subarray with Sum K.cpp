class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        unordered_map<int,int>m;
        int sum=0;
        int l=0;
        int c=0;
       
        for(int i=0;i<arr.size();i++){
            sum=sum+arr[i];
            if (sum == k) {
                l = max(l, i + 1);  
            }
                
           if(m.find(sum-k)!=m.end()){
              int l1=i-m[sum-k];
               l=max(l,l1);
           }
           if(m.find(sum)==m.end()){
             m[sum]=i;
           }
        }
   return l; }
};
