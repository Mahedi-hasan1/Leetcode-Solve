class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<unsigned int > posWay(amount+1,0);
        posWay[0]=1;
        for(int j =0 ; j<coins.size() ; j++){
            for(int i = coins[j] ; i<=amount ; i++){
                posWay[i]+= posWay[i-coins[j]];
            }
        }
        
        return posWay[amount];
    }
};