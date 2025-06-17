class Solution {
public:
    int search(string pat, string txt) {
        int ans = 0;
        int k = pat.length();
        
        unordered_map<char, int> m;
        unordered_map<char, int>m1;
        
        
        for (char c : pat) {
            m[c]++;
        }
        
       
        for (int i = 0; i < txt.length(); i++) {
            m1[txt[i]]++;
            
            
            if (i >= k) {
                char l = txt[i - k];
               m1[l]--;
                if (m1[l] == 0) {
                    m1.erase(l);
                }
            }
            
            
            if (i >= k - 1) {
                if (m1 == m) {
                    ans++;
                }
            }
        }
        
        return ans;
    }
};
