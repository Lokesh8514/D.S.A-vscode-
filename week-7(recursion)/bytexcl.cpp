#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(int i, vector<int>& nums, vector<int>& ans, int k) {
        // Prune if not enough elements left
        if (ans.size() + (nums.size() - i) < k) return;

        // Base case: combination complete
        if (ans.size() == k) {
            for (int x : ans) cout << x << " ";
            cout << endl;
            return;
        }

        if (i == nums.size()) return;

        // Exclude current element
        solve(i + 1, nums, ans, k);

        // Include current element
        ans.push_back(nums[i]);
        solve(i + 1, nums, ans, k);
        ans.pop_back();  // Backtrack
    }

    void combine(int n, int k) {
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            nums[i] = i + 1;
        }
        vector<int> ans;
        solve(0, nums, ans, k);
    }
};

int main() {
    Solution s;
    s.combine(20, 10);  // Will print all 184,756 combinations
    return 0;
}
