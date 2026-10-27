class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_set<int>mp;
        int count = 0;
        vector<int>ans;
        for(int i=0; i<A.size(); i++){
            if(mp.find(A[i])!=mp.end()){
                count++;
            }
            if(mp.find(A[i])==mp.end()){
                mp.insert(A[i]);
            }
            if(mp.find(B[i])!=mp.end()){
                count++;
            }
            
            if(mp.find(B[i])==mp.end()){
                mp.insert(B[i]);
            }
            ans.push_back(count);
        }
        return ans;
    }
};