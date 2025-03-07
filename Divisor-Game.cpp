class Solution {
public:
    

    
    bool divisorGame(int n) {
        vector<vector<int>>divs(1001);
        vector<bool>mem(1001,1);
        for(int i = 1; i<=n ; i++){
            for(int j=i+i ; j<=n ;j+=i){
                divs[j].push_back(i);
            }
        }
        mem[1]=0;
        for(int i=2 ;i<=n; i++){
            bool w=0 ;
            for(int j=0 ; j<divs[i].size() ; j++){
                int pos = i - divs[i][j];
                if(mem[pos]==0){
                    w=1;
                    break;
                }
            }
            if(w==0)mem[i]=0;
        }
        if(mem[n])return true;
        else return false;
    }
    
};