class Solution {
public:
    string getHint(string secret, string guess) {
        int n_bull = 0;
        int n_cow = 0;
        vector<int> digit_map(10, 0);
        for( int i = 0; i < secret.length(); i++ ){
            if( secret[i] == guess[i] )
                n_bull++;
            else{
                if( digit_map[ secret[i] - '0' ]++ < 0 ) n_cow++;
                if( digit_map[ guess[i] - '0' ]-- > 0 ) n_cow++;
            }
        }
        
        return to_string(n_bull) + "A" + to_string(n_cow) + "B";
    }
};