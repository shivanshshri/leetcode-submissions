class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix[0].size();
        for(int i=0; i<n; i++){
            unordered_set<int>Cnums;
            unordered_set<int>Rnums;
            for(int j=0; j<n; j++){
                if(Rnums.find(matrix[i][j])==Rnums.end()){
                    Rnums.insert(matrix[i][j]);
                }
                else{
                    return false;
                }
                if(Cnums.find(matrix[j][i])==Cnums.end()){
                    Cnums.insert(matrix[j][i]);
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};