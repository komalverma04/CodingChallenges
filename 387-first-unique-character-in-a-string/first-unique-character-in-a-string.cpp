class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<int,int>mpp;
        int n = s.size();
        for(int i = 0;i<n;i++){
            mpp[s[i]]++;
        }
        int ans = -1;
        for(int i = 0;i<n;i++){
            if(mpp[s[i]] == 1){
                ans = i;
                break;
            }
        }
    return ans;
    }
};