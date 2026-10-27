class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char>mp;
        for(char ch: jewels){
            mp.insert(ch);
        }
        int count = 0;
        for(int i=0; i<stones.length(); i++){
            if(mp.find(stones[i])!=mp.end()){
                count++;
            }
        }
        return count;
    }
};