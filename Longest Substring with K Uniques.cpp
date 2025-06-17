class Solution {
  public:
    int longestKSubstr(string &s, int k) {
       int l=-1;
       int left=0;
       unordered_map<char,int>m;
       for(int r=0;r<s.length();r++){
           m[s[r]]++;
           if(m.size()>k){
              m[s[left]]--;
              if (m[s[left]] == 0) {
                    m.erase(s[left]);
                }
              left++;
           }
           if(m.size()==k){
           l=max(l,r-left+1);
           }
       }
        
   return l; }
};
