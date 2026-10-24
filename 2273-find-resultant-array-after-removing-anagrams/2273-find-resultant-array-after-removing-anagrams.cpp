class Solution {
public:
    bool isAnagram(string word1, string word2){
        unordered_map<char, int>mp1;
        unordered_map<char, int>mp2;
        for(int i=0; i<word1.length(); i++){
            mp1[word1[i]]++;
            mp2[word2[i]]++;
        }
        if(mp1==mp2){
            return true;
        }
        return false;
    }
    vector<string> removeAnagrams(vector<string>& words) {
        for(int i=0; i<words.size()-1; i++){
            if(words[i].length()==words[i+1].length()){
                if(isAnagram(words[i], words[i+1])){
                    words.erase(words.begin()+i+1);
                    i--;
                }
            }
        }
        return words;
    }
};