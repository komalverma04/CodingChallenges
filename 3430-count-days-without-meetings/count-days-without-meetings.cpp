class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(begin(meetings), end(meetings)); int n = meetings.size();
        int diff = 0; int maxi = meetings[0][1];
        diff = (meetings[0][1] - meetings[0][0]) + 1;
        for(int i = 1;i<n;i++){
            if(meetings[i][0] > maxi){
                diff += ((meetings[i][1] - meetings[i][0]) + 1);
            }else if(meetings[i][1] > maxi){
                diff += meetings[i][1] - maxi;
            }
            maxi = max(maxi, meetings[i][1]);
        }
        return days - diff;
    }
};