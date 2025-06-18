class Solution {
public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        vector<int> a;
        unordered_map<int, int> mp;
        
        for (int i = 0; i < arr.size(); i++) {
            mp[arr[i]]++;  
            
            if (i >= k - 1) {
                a.push_back(mp.size());  
                
                mp[arr[i - k + 1]]--;  
                if (mp[arr[i - k + 1]] == 0) {
                    mp.erase(arr[i - k + 1]);  
                }
            }
        }
        return a;
    }
};
