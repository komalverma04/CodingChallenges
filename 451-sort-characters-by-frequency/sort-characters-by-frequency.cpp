class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int,char>>freq(256,{0,0});
        int n = s.size();
        for(int i = 0; i<n;i++){
            freq[s[i]].first++;
            freq[s[i]].second = s[i];
        }
        sort(freq.begin(), freq.end());
        string ans = "";
        for(auto ele : freq){
            if(ele.first > 0){
                int num = ele.first;
                while(num != 0){
                    ans.push_back(ele.second);
                    num--;
                }
               
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};