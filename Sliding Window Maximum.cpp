class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> q;
        vector<int> a;
        
        for (int i = 0; i < nums.size(); i++) {
           
            while (!q.empty() && nums[q.back()] < nums[i]) {
                q.pop_back();
            }
            q.push_back(i);

            
            if (!q.empty() && q.front() <= i - k) {
                q.pop_front();
            }

            
            if (i >= k - 1) {
                a.push_back(nums[q.front()]);
            }
        }
        return a;
    }
};
