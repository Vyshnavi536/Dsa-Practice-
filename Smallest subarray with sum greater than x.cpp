#include <climits>
class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        int sum = 0;
        int l = 0;
        int c = INT_MAX;

        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];

            while (sum >= x) {
                int j = i - l + 1;
                c = min(c, j);
                sum -= arr[l];
                l++;
            }
        }

        if (c == INT_MAX) return 0;  
        return c;
    }
};
