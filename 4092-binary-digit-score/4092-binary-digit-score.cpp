class Solution {
public:
    string toBinary(int n){
        string binary = "";
        while(n>0){
            int rem  = n%2;
            binary+=to_string(rem);
            n/=2;
        }
        reverse(binary.begin(), binary.end());
        return binary;
    }
    int calculateScore(int a, int b) {
        string a1 = toBinary(a);
        string b1 = toBinary(b);

        int a2 = 0;
        int b2 = 0;
        for(int i=0; i<a1.length(); i++){
            if(a1[i]=='1'){
                a2++;
            }
        }
        for(int i=0; i<b1.length(); i++){
            if(b1[i]=='1'){
                b2++;
            }
        }

        if(a2>=b2){
            return a2*b2;
        }
        return b2/a2;
    }
};