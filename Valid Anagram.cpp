class Solution {
public:
    bool isAnagram(string s, string t) {
       map<char,int>m;
       map<char,int>m1;
       for(int i=0;i<s.length();i++){
        if(m.find(s[i])!=m.end()){
            m[s[i]]++;
        }
        else{
            m[s[i]]=1;
        }
       }
       for(int i=0;i<t.length();i++){
        if(m1.find(t[i])!=m1.end()){
            m1[t[i]]++;
        }
        else{
            m1[t[i]]=1;
        }
       }
      if(m==m1) return true;
    return false;}
};
