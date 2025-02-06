class Solution {
public:
    string longestPalindrome(string s) {
        vector<vector<int>>palPosLen(1001, vector<int>(1001,0));
        int len = s.size(),palStartingPos=0, palLen=1;
        string res = \\;
        for(int i=0 ; i<len; i++){
            palPosLen[i][1]=1;
        }

        for(int i=0; i<len-1; i++){
            if(s[i]==s[i+1]){
                palPosLen[i][2]=1;
                palStartingPos=i;
                palLen = 2;
                
            }
        }

        for(int i=3 ; i<=len; i++){
            for(int j=0 ; j<len-i+1; j++){
                if(palPosLen[j+1][i-2] && s[j]==s[j+i-1]){
                    palPosLen[j][i]=1;
                    palStartingPos=j;
                    palLen=i;
                }
            }
        }
        for(int i=palStartingPos; i<palStartingPos+palLen; i++)
            res+=s[i];
        return res;


    }
};