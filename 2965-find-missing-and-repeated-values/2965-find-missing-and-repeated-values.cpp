class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int total = n*n;
        vector<int>freq(total+1,0);
        int a,b;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                freq[grid[i][j]]++;

                if(freq[grid[i][j]]==2){
                    a = grid[i][j];
                }
            }
        }

        for(int i=1;i<=total;i++){
            if(freq[i]==0){
                b = i;
                break;
            }
        }
        return {a,b};

    }
};