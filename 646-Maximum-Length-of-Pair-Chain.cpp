class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        
        vector<pair<int,int>>par;
        for(int i=0;i<pairs.size() ; i++){
            par.push_back({pairs[i][1], pairs[i][0]});
        }
        sort(par.begin(), par.end());

        int res = 1;
        pair<int,int>cur;
        cur.first = par[0].first ;
        cur.second = par[0].second ;
        for(int i=1 ; i<pairs.size() ; i++){
            if(cur.first < par[i].second){
                res++;
                cur.first = par[i].first;
                cur.second = par[i].second;
            }
        }

        return res;
    }
};