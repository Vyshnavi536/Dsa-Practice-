class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> m;

       
        for (char c : s) {
            m[c]++;
        }

        int l = 0;
        bool k = false;

        for (auto it : m) {
            if (it.second % 2 == 0) {
                l += it.second;      
            } else {
                l += it.second - 1;   
                k = true;             
            }
        }

        if(k){
            l=l+1;
        }
       

        return l;
    }
};
