class Solution {
  public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        
        int sum=0;
        
        int m=INT_MIN;
        
        for(int i=0;i<arr.size();i++){
            
            sum=sum+arr[i];
            
            if(i>=k-1){
                
                m=max(m,sum);
                
                sum=sum-arr[i-k+1];
            }
        }
        
    return m;}
};
