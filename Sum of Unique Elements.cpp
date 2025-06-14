class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i])!=m.end()){
                m[nums[i]]++;
            }
            else m[nums[i]]=1;
        }
        int k=0;
        for(auto i:m){
            if(i.second==1){
                k+=i.first;
            }
        }
    return k;}
};
