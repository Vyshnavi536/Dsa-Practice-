class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> k;
        set<int> s(nums1.begin(), nums1.end());
        set<int> s1(nums2.begin(), nums2.end());

        for (int num : s) {
            if (s1.find(num) != s1.end()) {
                k.push_back(num);
            }
        }

        return k;
    }
};
