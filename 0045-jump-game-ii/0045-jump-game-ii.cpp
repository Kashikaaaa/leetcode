class Solution {
public:
    vector<int> t;

    int solve(vector<int>& nums, int i, int n) {
        if(i >= n-1) {
            return 0;
        }

        if(t[i] != -1) {
            return t[i];
        }

        int mini = INT_MAX;

        for(int j = 1; j <= nums[i]; j++) {
            if(i+j < n) {
                int ans = solve(nums, i+j, n);

                if(ans != INT_MAX) {
                    mini = min(mini, 1 + ans);
                }
            }
        }

        return t[i] = mini;
    }

    int jump(vector<int>& nums) {
        int n = nums.size();

        t.assign(n, -1);

        return solve(nums, 0, n);
    }
};