class Solution {
    void solve(vector<int>& nums, vector<vector<int>>& ans, vector<int>& output, int i){
        if( i == nums.size()){
            ans.push_back(output);
            return;
        }
        vector<int> output1 = output; output1.push_back(nums[i]);
        vector<int> output2 = output;
        solve(nums, ans, output1, i+1);
        solve(nums, ans, output2, i+1);
        return;
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        solve(nums, ans, output, 0);
        return ans;
    }
};