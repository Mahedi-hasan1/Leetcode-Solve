class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int>dp(amount+1);
        dp[0]=0;
        //sort(coins.begin(), coins.end());
        for(int i=1 ; i<=amount; i++){
            dp[i]= INT_MAX;
        }
        for(int i=1 ; i<=amount; i++){
            for(int j=0; j<coins.size(); j++){
                if(i-coins[j]<0)continue;
                if(dp[i-coins[j]] != INT_MAX) dp[i]= min(dp[i], dp[i-coins[j]]+1);
            }
        }
        if(dp[amount]==INT_MAX)return -1;
        return dp[amount];
    }
};