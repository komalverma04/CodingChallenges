class Solution {
    void solve(vector<int>& nums, set<vector<int>>& st, vector<int>& output, int i){
        if(i == nums.size()){
            //sort(output.begin(), output.end());
            st.insert(output);
            return;
        }
        vector<int> output1 = output;
        vector<int> output2 = output;
        output1.push_back(nums[i]);
        solve(nums, st, output1, i+1);
        solve(nums, st, output2, i+1);
        return;

    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> st;
        vector<vector<int>> ans;
        vector<int> output;
        sort(nums.begin(), nums.end());
        solve(nums, st, output, 0);
        for(auto s: st){
            ans.push_back(s);
        }
        return ans;
    }
};