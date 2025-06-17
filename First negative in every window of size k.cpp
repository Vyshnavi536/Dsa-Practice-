class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        queue<int>q;
        vector<int>a;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<0){
              q.push(i);   
            }
           
        
        if(i>=k-1){
            while(!q.empty()&&q.front()<i-k+1){
                q.pop();
            }
            if (!q.empty()) {
            a.push_back(arr[q.front()]);
                
            }
            else{
                a.push_back(0);
            }
        }
        }    
    return a;}
};
