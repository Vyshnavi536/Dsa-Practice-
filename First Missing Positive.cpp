class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int> s;
        for (int num : nums) {
            if (num > 0) {
                s.insert(num);  
            }
        }

        int j = 1;
        for (int num : s) {
            if (num != j) {
                return j; 
            }
        j++;
        }

        return j;  
    }
};
