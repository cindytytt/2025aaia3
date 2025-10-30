//week08-1.cpp
//1672. Richest Customer Wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0;
        for(int i=0;i<accounts.size();i++){
            int now = 0;//迴圈前面 now=0
            for (int j=0;j<accounts[0].size();j++){//右手
                now += accounts[i][j];//把錢加起來
            }//迴圈裡面更新now陣列左手
            ans = max(ans,now); //最有錢的人更新答案
        }
        return ans;
    }
};
